#include <stdio.h>

int f(void);

int gAll = 12;
 
int main()
{
	//全局变量
	//不给全局变量初始化 全局变量会被初始化为0
	//本地变量就不一定了 
	printf("in %s gAll = %d\n", __func__, gAll);
	f();		 
	return 0;
}

int f()
{
	printf("in %s gAll = %d\n", __func__, gAll);
	gAll++;
	printf("in %s gAll = %d\n", __func__, gAll);
}
