#include <stdio.h>
#include <string.h>

int mycmp (const char *a, const char *b);
int main()
{
	//�ַ����������ܺͼ���
	
	
	//strcmpʵ�� 
	char s1[] = "abc";
	char s2[] = "cbc";
	
//	printf("%d\n", strcmp(s1, s2)); 
	printf("%d\n", mycmp(s1, s2)); 
	return 0;
}

int mycmp (const char *a, const char *b)
{
	//������ʽ��д�� 
//	int idx = 0;
//	while (a[idx] == b[idx] |&& a[idx] != '\0') {
//		idx++;
//	}
//	return a[idx] - b[idx];

	//ָ����ʽ��д��
	while (*a == *b && *a != '\0') {
		*a++;
		*b++;
	} 
	return *a-*b;
}








