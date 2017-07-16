#include <stdio.h>
#include <string.h>

int mycmp (const char *a, const char *b);
int main()
{
	//字符串函数介绍和简析
	
	
	//strcmp实现 
	char s1[] = "abc";
	char s2[] = "cbc";
	
//	printf("%d\n", strcmp(s1, s2)); 
	printf("%d\n", mycmp(s1, s2)); 
	return 0;
}

int mycmp (const char *a, const char *b)
{
	//数组形式的写法 
//	int idx = 0;
//	while (a[idx] == b[idx] |&& a[idx] != '\0') {
//		idx++;
//	}
//	return a[idx] - b[idx];

	//指针形式的写法
	while (*a == *b && *a != '\0') {
		*a++;
		*b++;
	} 
	return *a-*b;
}








