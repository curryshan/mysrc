#include <stdio.h>

void swap(int *i, int *j);
void minmax(int arr[], int arrCount, int *min, int *max); 
int divide(int a, int b, int *result); 
int main()
{
	//��������ֵ
//	int i = 100;
//	int j = 200;
//	swap (&i, &j);
//	printf("i=%d j=%d\n", i, j); 


	//���������Сֵ(ָ����Խ���෵��ֵ������)
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int arrCount = sizeof(arr)/sizeof(arr[0]);
//	int min,max;
//	minmax(arr, arrCount, &min, &max);
//	printf("min=%d, max=%d\n", min, max);

	//��������������(�������������״̬ ָ�뷵�ؽ��)
	//���õ���·���ú������������ ��������Ч��Χ�ڵ�ֵ����ʾ���� 
	//�����߼����Ե��쳣 ���õĽ����������� 
	int a = 5;
	int b = 2;
	int c;
	if (devide(a, b, &c)) {
		printf("%d/%d = %d\n", a,b,c);
	} else {
		printf("������̳���");
	}
	
	
	
	return 0;
}

void swap(int *i, int *j)
{
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}

void minmax(int arr[], int arrCount, int *min, int *max)
{
	int index;
	*min = *max = arr[0];
	for (index = 1;index<arrCount;index++){
		if (arr[index] < arr[0]) {
			*min = arr[index];
		}
		if (arr[index] > arr[0]) {
			*max = arr[index];
		}
	}	 
} 

/**
 * �����ɹ� ����1 ���򷵻�0 
 */
int devide (int a, int b, int *result)
{
	int ret = 1;
	if (b == 0) {
		ret = 0;
	} else {
		*result = a/b;
	}
	return ret;
}






