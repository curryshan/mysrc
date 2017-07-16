#include <stdio.h>
#include <stdlib.h>

int main()
{
	//动态内存分配     c99之前
	//malloc函数的返回值类型为void* 
//	int number;
//	int *a;
//	int i;
//	printf("输入数量：");
//	scanf("%d", &number);
//	a = (int *)malloc(number*sizeof(int)); 
//	for (i=0; i<number; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i=number-1;i>=0;i--) {
//		printf("%d\n", a[i]);
//	}
//	free(a);

	//测试系统可以分配多大的空间 
//	void *p;
//	int cnt = 0;
//	while((p=malloc(100*1024*1024))){
//		cnt++;
//	}
//	printf("分配了%d00MB的空间", cnt);

	return 0;
} 
