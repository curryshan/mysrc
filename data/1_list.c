#include <stdio.h>
#define MAXSIZE 10

typedef struct{
	int data[MAXSIZE];
	int last;
} List;

List *createList();
void insert(int place, int value, List *ptrL);
int find(int value, List *ptrL);
int findKth(int k, List *ptrL);
void delete(int k, List *ptrL);

int main()
{
	List *l;
	//���Ա�
	//����ʵ��
	l = createList();
	insert(1, 10, l);
	insert(1, 11, l);
	printf("%d\n", find(1, l));
	printf("%d\n", find(11, l));
	printf("%d\n", find(10, l));
	delete(1, l);
	printf("%d\n", find(11, l));
	return 0;
}

//��ʼ��
List *createList()
{
	List *ptrL;
	ptrL = (List *)malloc(sizeof(List));
	ptrL->last = -1;
	return ptrL;
}

//���뵽��place��λ��(��place-1�����)
void insert(int place, int value, List *ptrL)
{
	int j;
	if (ptrL->last == MAXSIZE-1) {
		printf("����");
		return;
	}
	if (place<1 || place>ptrL->last+2) {
		printf("����λ�ô���");
		return;
	}
	for (j=ptrL->last; j>=place-2; j--) {
		ptrL->data[j+1] = ptrL->data[j];
	}
	ptrL->data[place-1] = value;
	ptrL->last++;
}

//����ֵ�Ƿ����
int find(int value, List *ptrL)
{
	int j = 0;
	if (ptrL->last == -1) {
		printf("���");
		return;
	}
	while (j<MAXSIZE-1 && ptrL->data[j]!=value) {
		j++; 
	}
	if (j == MAXSIZE-1) {
		return -1;
	} else {
		return j+1;
	}
}

//�����ض�λ�õ�ֵ
int findKth(int k, List *ptrL)
{
	int j = 0;
	if (ptrL->last == -1) {
		printf("���");
		return;
	}
	while (j<MAXSIZE-1) {
		j++; 
	}
	if (j == MAXSIZE-1) {
		return NULL;
	} else {
		return ptrL->data[j];
	}
}


//ɾ����k��Ԫ��
void delete(int k, List *ptrL)
{
	int j;
	if (k<1 || k>MAXSIZE+1) {
		printf("ɾ��λ�ô���");
		return;
	}
	for (j=k; j<ptrL->last+1; j++) {
		ptrL->data[j-1] = ptrL->data[j];
	}
	ptrL->last--;
}








