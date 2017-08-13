#include <stdio.h>
#include <string.h>
#define MAXLINE 100

// 加密函数 
void encrypt(char *);
void encryptArr(char s[]);
int main()
{
	//使用指针计算数组元素个数
	//和数组元素的存储单元数
//	double a[2], *p, *q;
//	
//	p = &a[0];
//	q = p+1;
//	printf("bettwen p and q have %d element\n",q-p);
//	printf("between p and q have %d byte\n", (int) q - (int) p); 

	//输入10个整数作为数组元素
	//分别使用数组和指针来计算输出数组和
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sum = 0, i = 0;
//	int *p;
//	//数组
//	for (i=0; i<10; i++) {
//		sum = sum + arr[i];
//	}
//	printf("sum is %d\n", sum);
//	sum = 0;
//	for (p=arr; p<=arr+9; p++) {
//		sum += *p;
//	} 
//	printf("sum is %d\n", sum);

	//电码加密
	char line[MAXLINE];
	
	printf("input the string:\n");
	gets(line);
	encryptArr(line);
	printf("after being encrypted string is %s\n", line);
	 
	return 0; 
}
//数组形式 
void encryptArr (char s[]) 
{
	int i;
	for (i=0; s[i]!='\0'; i++) {
		if (s[i] == 'z') {
			s[i] == 'a';
		} else {
			s[i] += 1; 
		}
	}
}
//指针形式 
void encrypt (char *s)
{
	while(*s != '\0') {
		if (*s == 'z') {
			*s = 'z';
		} else {
			*s += 1;
		}
		s++;
	} 
}















