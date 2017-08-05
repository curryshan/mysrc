#include <stdio.h>
#include "max.h"


//""要求编译器首先在当前目录去寻找这个文件
//如果没有，到编译器指定的目录去找
//<>让编译器只在指定的目录去找

//在使用和定义函数的地方都应该#include这个头文件
 
int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d\n", max(a,b));
	return 0;
}
