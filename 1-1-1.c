#include <stdio.h>

void swap(int *i, int *j);
void minmax(int arr[], int arrCount, int *min, int *max); 
int divide(int a, int b, int *result); 
int main()
{
	//交换两个值
//	int i = 100;
//	int j = 200;
//	swap (&i, &j);
//	printf("i=%d j=%d\n", i, j); 


	//查找最大最小值(指针可以解决多返回值的问题)
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int arrCount = sizeof(arr)/sizeof(arr[0]);
//	int min,max;
//	minmax(arr, arrCount, &min, &max);
//	printf("min=%d, max=%d\n", min, max);

	//两个整数做除法(函数返回运算的状态 指针返回结果)
	//常用的套路是让函数返回特殊的 不属于有效范围内的值来表示出错 
	//后续高级语言的异常 更好的解决了这个问题 
	int a = 5;
	int b = 2;
	int c;
	if (devide(a, b, &c)) {
		printf("%d/%d = %d\n", a,b,c);
	} else {
		printf("计算过程出错");
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
 * 除法成功 返回1 否则返回0 
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






