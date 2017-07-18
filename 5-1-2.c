#include <stdio.h>

int f(void);
int s(void);
int gAll = 0;

int main()
{
	//静态本地变量
//	f();
//	f();
//	f();


	//静态本地变量实际上是一种全局变量
	//静态变量有全局变量的生存期
	//静态变量有本地变量的作用域 
	s();
	return 0;
} 

f (void)
{	 
	static int all = 1;
	all++;
	printf("all = %d\n", all);
}

s (void)
{
	int i = 0; 
	static int all = 1;
	printf("&gAll = %p\n", &gAll);
	printf("&all = %p\n", &all);
	printf("&i = %p\n", &i);
} 



