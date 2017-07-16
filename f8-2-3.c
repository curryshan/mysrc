#include <stdio.h>

int main()
{
	//读入字符串(不安全) 
//	char word[8];
//	scanf("%s", word);
//	printf("%s\n", word);
	
	//安全读入
//	char word[8];
//	scanf("%s", word);
//	printf("%s\n", word); 

	//常见错误(指针没有初始化)
	//此时string 指向一个不知道什么的地方 
	char * string;
	scanf("%s", string);
	 
	return 0;
}
