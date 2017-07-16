#include <stdio.h>

int main()
{
	//字符串
	
	char *str = "hello";
	char word[] = "hello";
	char line[10] = "hello";
	
	int i = 0;
	// 1(报错)
//	char *s = "hello";
//	s[0] = "b";
//	printf("s[0] = %c\n", s[0]); 
	
	// 2(试验 解决问题)
//	char *s = "hello";
//	char *s2 = "hello";
//	
//	printf("s = %p\n", s); 
//	printf("s2 = %p\n", s2);
	
	//3(字符串常量)
	//char *s = "hello"中，s是一个指针
	//初始化为指向一个字符串常量
	//由于这个常量所在的地方，实际上s是const char *s 
	//要想改变 用char word[]形式来定义  
	
	
	return 0;
}





