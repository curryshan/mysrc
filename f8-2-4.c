#include <stdio.h>
#include <string.h>
int main() {
	//字符串函数

//	strlen返回字符串的长度 不包含结尾0
//	char line[] = "hello";
//	printf("%d\n", strlen(line));
//	printf("%d\n", sizeof(line));

//	strcmp比较两个字符串(相等返回0)
	char str1[] = "shan";
	char str2[] = "meng";
	printf("%d\n", strcmp(str1, str2));
	return 0;
}
