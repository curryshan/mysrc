#include <stdio.h>

int main(int argc, char const *argv[])
{
	//putchar和getchar
	//这都是操作单个字符的函数
	//为什么会等我们输入回车之后才会执行
	//理解shell的概念 理解shell是如何工作的 
//	int ch;
//	
//	while((ch = getchar()) != EOF){
//		putchar(ch);
//	} 
//	
//	printf("EOF\n"); 

	//字符串数组
//	char *a[] = {
//		"hello", "world", "asd",
//	}; 
	
	//用字符串数组代替switch case (错的！)
//	int index;
//	char *a[] = {
//		"one","two","three" 
//	};
//	
//	scanf("%d", &index);
//	printf("你输入的数字对应:%d月", a[index]); 
	
	//字符串数组的应用之程序参数
	//int main(int argc, char const *argv[]); 
	//argv[0]是命令本身
	
//	int i;
//	for (i=0; i<argc; i++) {
//		printf("%d:%s\n", i, argv[i]);
//	} 
	
	return 0;
}
