#include <stdio.h>

void swap1(int *px, int *py);
void swap2(int *px, int *py);
void bubble(int arr[], int len); 

int main()
{ 
	//������������ֵ
	//�β�ֵ�øı䲻��Ӱ�쵽��������(main)
	//�е�ʵ�� 
//	int a = 10;
//	int b = 20;
//	int *pa = &a;
//	int *pb = &b;
//	swap1(pa, pb);
//	printf("a = %d b= %d\n", a, b); 
//	swap2(pa, pb);
//	printf("a = %d b= %d\n", a, b); 

	//ð������8�����µ�����
	int i, arr[8], len;
	printf("please enter number:\n");
	scanf("%d", &len);
	 
	for (i=0; i<len; i++) {
		scanf("%d", &arr[i]); 
	}
	
	bubble(arr, len);
	
	for (i=0; i<len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}	
	
	return 0;
}

//void swap1(int *px, int *py)
//{
//	int t;
//	t = *px;
//	*px = *py;
//	*py = t;
//}
//
//void swap2(int *px, int *pb)
//{
//	int *t;
//	t = px;
//	px = py;
//	py = t;
//}

void bubble(int arr[], int len)
{
	int i, j, temp;
	for (i=1; i<len; i++) {
		for (j=0; j<len-i; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}






