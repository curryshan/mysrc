#include <stdio.h>

int main()
{
	//�����ά���� ���ҳ����ֵ ����±�
//	int i, j;
//	int max_i = 0, max_j = 0;
//	int arr[3][2] = {0};
//	
//	for (i=0; i<3; i++) {
//		for (j=0; j<2; j++) {
//			printf("please enter number on %d--%d\n", i, j);
//			scanf("%d", &arr[i][j]);
//			if (j > 0) {
//				if (arr[i][j]>arr[i][j-1]) {
//					max_i = i;
//					max_j = j; 
//				}
//			} else if (i > 0) {
//				if (arr[i][j]>arr[i-1][1]) {
//					max_i = i;
//					max_j = j;
//				}
//			}
//		}
//	} 
//	
//	for (i=0; i<3; i++) {
//		for (j=0; j<2; j++) {
//			printf("%6d", arr[i][j]); 
//		}
//		printf("\n");
//	}
//	
//	printf("max_i = %d, max_j = %d, max_value = %d\n",
//	max_i,max_j,arr[max_i][max_j]);

	
	//�ж��ַ����Ƿ�Ϊ����(�ַ���Ϊ80����)
	char line[80];
	int i,j,sign;
	printf("please enter string\n");
	j = 0;
	while ((line[j] = getchar()) != '\n' ) {
		j++;
	}
	line[j] = '\0';

	i = 0;   //�ַ������ַ��±�
	j = j - 1;  //�ַ���β�ַ��±�
	sign = 1;//bool��ʶ 
	
	while (i < j) {
		if (line[i] != line[j]) {
			sign = 0;
			break;
		}
		i++;
		j--;
	} 
	if (sign) {
		printf("yes\n");
	} else {
		printf("no\n");
	}

	return 0;
}
