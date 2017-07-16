#include <stdio.h>
#include <string.h>

char *mycpy(char *dst, const char *src)
{
	//数组版本 
//	int idx = 0;
//	while (src[idx]) {
//		dst[idx] = src[idx];
//		idx++;
//	}
//	dst[idx] = '\0';

	//指针版本
//	char *ret = dst;
//	while (*src) {
//		*dst++ = *src++; 
//	}
//	*dst = '\0';

	return ret; 
} 

int main()
{
	//字符串系列简析
	
	//strcpy
	//restrict表示src和 dst不重叠(c99)
	//char *strcpy(char *restrict dst, const char *restrict src);
	//返回dst
	
	char ch1[] = "shanmenghao";
	char ch2[] = "aaa";
	printf("%s\n", mycpy(ch2, ch1));
	return 0;
} 
