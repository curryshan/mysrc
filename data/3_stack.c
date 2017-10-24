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
	//栈 数组实现
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
//初始化栈
ArrayStack *createStack()
{
	ArrayStack *s;
	s->top = -1;
	return s;
} 
//入栈 
void push(ArrayStack *s, int value)
{
	if (s->top == MaxSize-1) {
		printf("栈满");
		return;
	}
	s->data[++(s->top)] = value;
	return; 
}

//出栈
int pop(ArrayStack *s)
{
	if (s->top == -1) {
		printf("栈空");
		return;
	}
	return (s->data[s->top--]);
} 

