#include <stdio.h>
#include <string.h>
int main() {
	//�ַ�������

//	strlen�����ַ����ĳ��� ��������β0
//	char line[] = "hello";
//	printf("%d\n", strlen(line));
//	printf("%d\n", sizeof(line));

//	strcmp�Ƚ������ַ���(��ȷ���0)
	char str1[] = "shan";
	char str2[] = "meng";
	printf("%d\n", strcmp(str1, str2));
	return 0;
}
