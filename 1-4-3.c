#include <stdio.h>
#include <string.h>

char *mycpy(char *dst, const char *src)
{
	//����汾 
//	int idx = 0;
//	while (src[idx]) {
//		dst[idx] = src[idx];
//		idx++;
//	}
//	dst[idx] = '\0';

	//ָ��汾
//	char *ret = dst;
//	while (*src) {
//		*dst++ = *src++; 
//	}
//	*dst = '\0';

	return ret; 
} 

int main()
{
	//�ַ���ϵ�м���
	
	//strcpy
	//restrict��ʾsrc�� dst���ص�(c99)
	//char *strcpy(char *restrict dst, const char *restrict src);
	//����dst
	
	char ch1[] = "shanmenghao";
	char ch2[] = "aaa";
	printf("%s\n", mycpy(ch2, ch1));
	return 0;
} 
