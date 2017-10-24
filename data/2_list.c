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
	//���Ա�
	//����ʵ��
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
//��ʼ������
List *createList()
{
	List *l;
	l->data = NULL;
	l->next = NULL;
	return l; 
}
 
//���
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
//���ҵ�k��Ԫ��
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
//����ֵ�Ƿ����
List *find(List *ptrL, int value)
{
	List *l;
	int j;
	while (value!=l->data && l) {
		l = l->next;
	}
	return l;
}
//����(�ڵ�i-1���ڵ�����)
List *insert(List *ptrL, int place, int value)
{
	List *frontNode, *newNode;
	//�½ڵ�����ڱ�ͷ
	if (place==1) {
		newNode = (List *)malloc(sizeof(List));
		newNode->data = value;
		newNode->next = ptrL;
		return newNode;
	}
	frontNode = findKth(ptrL, place-1);
	if (frontNode==NULL) {
		printf("��������");
		return;
	} else {
		newNode = (List *)malloc(sizeof(List));
		newNode->data = value;
		newNode->next = frontNode->next;
		frontNode->next = newNode;
		return newNode;
	}
	 
}
//ɾ���ڵ�
void delete(List *ptrL, int place)
{
	List *l;
	List *target;
	//���ɾ������ͷ��� 
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
		printf("��%d���ڵ㲻����\n", place-1);
		return NULL;
	} else if (l->next==NULL) {
		printf("��%d���ڵ㲻����\n", place);
		return NULL; 
	} else {
		target = l->next;
		l->next = target->next;
		free(target); 
	}	
}



