#include <stdio.h>
#include <string.h>

int main()
{
	//字符串函数
	
	// scanf & printf
	// scanf遇回车或空格输入结束
	// 并自动将输入的数据自动补上'\0'结束符
	// 送入数组中
	// 输入参数为字符型数组名 
//	char s[10];
//	scanf("%s", s); 
	
	// printf输出遇'\0'结束
	// 输出参数为字符数组名或字符串常量 
//	printf("%s\n", s); 

	// gets & puts
	// gets参数是字符串数组名
	// 函数从输入得到一个字符串
	// 遇回车结束，并自动将输入的数据自动补上'\0'结束符
	// 送入数组中 允许带空格 有返回值
//	gets(s)
	
	// puts参数可以是字符数组名或字符串常量
	// 输出时于'\0'转换为'\n'自动换行
	// 成功返回'\n', 失败返回EOF
	
	
	// 动态分配内存 malloc
	// 函数原型 void * malloc(unsigned size)
	// 在内存的动态存储区中分配一连续空间
	// 其长度为size，若申请成功
	// 返回指向所分配内存空间的起始地址的指针
	// 失败返回NULL
	// f返回值为(void *)类型，在具体使用中
	// 将返回值转换为特定指针类型，赋给一个指针
//	int *p;
//	p = (int *) malloc (n*sizeof(int));
	
	// 动态分配内存 calloc
	// malloc对所分配的存储块不做任何事情
	// calloc对整个区域进行初始化
//	int *p;
//	p = (int *) calloc (n, sizeof(int)); 

	// 动态存数释放函数 free
	// 申请的内存在使用完成后必须释放
	// 原型 void free (void * ptr)
	// ptr指向要释放空间的首地址
	
	// 求任意个整数的和(动态内存分配)
	int i, number, sum, *p;
	printf("please enter number:\n");
	scanf("%d", &number);
	if (p = (int * ) malloc(number*sizeof(int))) {
		printf ("please enter some number:\n");
		for (i=0; i<number; i++) {
			scanf("%d", p+i);
		}
		sum = 0; 
		while (*p) {
			sum += *p++;
		}
		printf("sum is %d", sum); 
	} else {
		printf("not able to allocate \n");
	}
	return 0;
} 







