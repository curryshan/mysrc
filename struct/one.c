#include <stdio.h>

//���Ա� 
int main()
{
	//����һ��˳��ṹֱ�ӱ�ʾ
	//��������˳��ṹ��ʾ������
	//�ýṹ�����ʾ
	//����ķ�������ϵ����ָ�����
	//��Ӧһ��������
	//����������ṹ�洢������ 
	
	
	//���������ռ�˳����
	typedef struct{
		ElementType Data[MAXSIZE];
		int Last;
	} List;
	
	List L, *PtrL;
	//�����±�Ϊi��Ԫ��
	//L.Data[i]��Ptrl->Data[i] 
	//���Ա�ĳ���
	//L.Last+1��PtrL->Last+1
	
	//��ʼ��(�����յ�˳���)
	List *MakeEmpty()
	{
		List *PtrL;
		PtrL = (List*) malloc (sizeof(List));
		PtrL->Last = -1;
		return PtrL;
	} 
	
	//����
	int Find (ElememtType X, List *PtrL)
	{
		//ƽ���Ƚϴ���Ϊ(n-1)/2    
		//O(n) 
		int i = 0;
		while (i<=PtrL->Last && PtrL->Data[i]!=X) {
			$i++;
		}
		if (i>PtrL->Last) {
			return -1;
		} else {
			//���ص��Ǵ洢λ�� 
			return i;
		}
	}
	
	//���� ��i��λ�ò���
	//���ƶ� �ٲ���
	void Insert (ElementType X, int i, List *PtrL)
	{
		int j;
		//MAXSIZE������Ĵ�С 
		if (PtrL->Last == MAXSIZE-1) {
			printf("����");
			return;
		}
		if (i<1 || i>PtrL->Last+2) {
			ptinrf("����λ�ô���");
			return;
		}
		//�Ӻ���ǰŲ
		//ƽ���ƶ�����n/2 O(n) 
		for (j=PtrL->Last; j>=i-1; j--) {
			Ptrl->Data[j+1] = PtrL->Data[j];	
		}
		Ptrl->Data[i-1] = X; 
		PtrL->Last++;
		return;
	}
	
	//ɾ�� ɾ����i��Ԫ�� 
	void Delete(ElementType i, List *PtrL)
	{
		if (i<1 || i>Ptrl->Last+1) {
			printf("λ�ò��Ϸ�");
			return; 
		} 
		//ƽ���ƶ�����Ϊ(n-1)/2
		//O(n) 
		for (j=i; j<PtrL->Last; j++) {
			PtrL->Data[j-1] = PtrL->Data[j]; 
		}
		PtrL->Last--;
		return;
	} 
	
	
	
	
	
	return 0;
}
