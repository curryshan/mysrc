#include <stdio.h>

int main()
{
	//存入二维数组 并找出最大值 输出下标
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

	
	//判断字符串是否为回文(字符串为80以内)
	char line[80];
	int i,j,sign;
	printf("please enter string\n");
	j = 0;
	while ((line[j] = getchar()) != '\n' ) {
		j++;
	}
	line[j] = '\0';

	i = 0;   //字符串首字符下标
	j = j - 1;  //字符串尾字符下标
	sign = 1;//bool标识 
	
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
