#include <stdio.h>

int main()
{
	//����쳲���������ǰ10����������ÿ��5����ӡ
	// 7-2
//	int arr[10] = {1,1};
//	int i = 0;
//	
//	for (i=2; i<10; i++) {
//		arr[i] = arr[i-1] + arr[i-2];
//	}
//	
//	for (i=0; i<10; i++) {
//		if (i%5 == 0) {
//			printf("\n");
//		}
//		printf("%6d ", arr[i]);
//	}

	//˳����� ����5���� ������һ���� �ҵ�����±� �Ҳ������not found
	// 7-3
//	int arr[5];
//	int sign = 0;
//	int target;
//	int i;
//	
//	for (i=0; i<5; i++) {
//		printf("please enter number:\n");
//		scanf("%d", &arr[i]);
//		printf("your enter is %d\n", arr[i]);
//	}
//	printf("please enter your target:\n");
//	scanf("%d", &target);
//	
//	for (i=0; i<5; i++) {
//		if (target == arr[i]) {
//			printf("index is %d\n", arr[i]);
//			sign = i;
//			break;		
//		}
//	}
//	if (sign == 0) {
//		printf("not found\n");
//	}

	//  ѡ������
	//  7-5
	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	int i,j,min,temp;
	for (i=0; i<10; i++) {
		min = i;
		for (j=i; j<10; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	
	for (i=0; i<10; i++) {
		if (i%5 == 0) {		
			printf("\n");
		}
		printf("%6d ", arr[i]);
	}

	return 0;
}
