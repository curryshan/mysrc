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

//³õÊ¼»¯Õ» 
LinkStack *createStack()
{
	LinkStack *s;
	s = malloc(sizeof(LinkStack));
	s->next = NULL;
	return s;
}

//ÅÐ¶ÏÕ»ÊÇ·ñÎª¿Õ
int isEmpty(LinkStack *s)
{
	return (s->next == NULL);
}
 
//ÈëÕ»
void push(LinkStack *s, int value)
{
	LinkStack *newNode;
	newNode = (LinkStack *)malloc(sizeof(LinkStack));
	newNode->data = value;
	newNode->next = s->next;
	s->next = newNode; 
}

//³öÕ»
int pop(LinkStack *s)
{
	LinkStack *targetNode;
	int targetData;
	if (isEmpty(s)) {
		printf("Õ»¿Õ");
		return;
	}
	targetNode = s->next;
	targetData = targetNode->data;
	s->next = targetNode->next;
	free(targetNode);
	return targetData;	
} 






