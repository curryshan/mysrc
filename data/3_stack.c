#include <stdio.h>
#define MaxSize 10

typedef struct{
	int data[MaxSize];
	int top;
}ArrayStack; 

ArrayStack *createStack();
void push(ArrayStack *s, int value);
int pop(ArrayStack *s);

int main()
{
	//ջ ����ʵ��
	int data;
	ArrayStack *s;
	s = createStack();
	push(s, 1);
	push(s, 2);
	data = pop(s);
	printf("data is %d\n", data);
	data = pop(s);
	printf("data is %d\n", data);
	return 0;
}
//��ʼ��ջ
ArrayStack *createStack()
{
	ArrayStack *s;
	s->top = -1;
	return s;
} 
//��ջ 
void push(ArrayStack *s, int value)
{
	if (s->top == MaxSize-1) {
		printf("ջ��");
		return;
	}
	s->data[++(s->top)] = value;
	return; 
}

//��ջ
int pop(ArrayStack *s)
{
	if (s->top == -1) {
		printf("ջ��");
		return;
	}
	return (s->data[s->top--]);
} 

