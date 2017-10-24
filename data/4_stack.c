#include <stdio.h>

typedef struct Node{
	int data;
	struct Node *next;
}LinkStack;

LinkStack *createStack();
int isEmpty(LinkStack *s);
void push(LinkStack *s, int value);

int main()
{
	LinkStack *s;
	int data;
	
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
LinkStack *createStack()
{
	LinkStack *s;
	s = malloc(sizeof(LinkStack));
	s->next = NULL;
	return s;
}

//�ж�ջ�Ƿ�Ϊ��
int isEmpty(LinkStack *s)
{
	return (s->next == NULL);
}
 
//��ջ
void push(LinkStack *s, int value)
{
	LinkStack *newNode;
	newNode = (LinkStack *)malloc(sizeof(LinkStack));
	newNode->data = value;
	newNode->next = s->next;
	s->next = newNode; 
}

//��ջ
int pop(LinkStack *s)
{
	LinkStack *targetNode;
	int targetData;
	if (isEmpty(s)) {
		printf("ջ��");
		return;
	}
	targetNode = s->next;
	targetData = targetNode->data;
	s->next = targetNode->next;
	free(targetNode);
	return targetData;	
} 






