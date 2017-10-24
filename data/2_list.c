#include <stdio.h>

typedef struct{
	int data;
	struct node *next;
}List;

List *createList();
int getLen(List *ptrL);
List *findKth(List *ptrL, int place);
List *find(List *ptrL, int value);
List *insert(List *ptrL, int place, int value);
void delete(List *ptrL, int place);

int main()
{
	//线性表
	//链表实现
	int len;
	List *l, *newOne, *newTwo, *newThree;
	l = createList();
	newOne = insert(l, 1, 2); 
	newTwo = insert(newOne, 1, 3); 
	delete(newTwo, 1);
	len = getLen(newTwo);
	printf("length is %d\n", len); 
	return 0;
}
//初始化链表
List *createList()
{
	List *l;
	l->data = NULL;
	l->next = NULL;
	return l; 
}
 
//求表长
int getLen(List *ptrL)
{
	List *l;
	int i = 0;
	l = ptrL;
	while (l!=NULL) {
		l = l->next;
		i++;
	}
	return i;	
}
//查找第k个元素
List *findKth(List *ptrL, int place)
{
	int j = 0;
	List *l;
	l = ptrL;
	while (j<place && l->next!=NULL) {
		l = l->next;
		j++;
	}
	if (j==place) return l;
	return NULL;
}
//查找值是否存在
List *find(List *ptrL, int value)
{
	List *l;
	int j;
	while (value!=l->data && l) {
		l = l->next;
	}
	return l;
}
//插入(在第i-1个节点后插入)
List *insert(List *ptrL, int place, int value)
{
	List *frontNode, *newNode;
	//新节点插入在表头
	if (place==1) {
		newNode = (List *)malloc(sizeof(List));
		newNode->data = value;
		newNode->next = ptrL;
		return newNode;
	}
	frontNode = findKth(ptrL, place-1);
	if (frontNode==NULL) {
		printf("参数错误");
		return;
	} else {
		newNode = (List *)malloc(sizeof(List));
		newNode->data = value;
		newNode->next = frontNode->next;
		frontNode->next = newNode;
		return newNode;
	}
	 
}
//删除节点
void delete(List *ptrL, int place)
{
	List *l;
	List *target;
	//如果删除的是头结点 
	if (place==1) {
		target = ptrL;
		if (ptrL!=NULL) {
			ptrL = ptrL->next;
		} else {
			return NULL;
		}
		free(target);
		return ptrL;
	}
	l = findKth(ptrL, place);
	if (l==NULL) {
		printf("第%d个节点不存在\n", place-1);
		return NULL;
	} else if (l->next==NULL) {
		printf("第%d个节点不存在\n", place);
		return NULL; 
	} else {
		target = l->next;
		l->next = target->next;
		free(target); 
	}	
}



