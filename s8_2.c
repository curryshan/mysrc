#include <stdio.h>
#include <string.h>
#define MAXLINE 100

// ���ܺ��� 
void encrypt(char *);
void encryptArr(char s[]);
int main()
{
	//ʹ��ָ���������Ԫ�ظ���
	//������Ԫ�صĴ洢��Ԫ��
//	double a[2], *p, *q;
//	
//	p = &a[0];
//	q = p+1;
//	printf("bettwen p and q have %d element\n",q-p);
//	printf("between p and q have %d byte\n", (int) q - (int) p); 

	//����10��������Ϊ����Ԫ��
	//�ֱ�ʹ�������ָ����������������
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sum = 0, i = 0;
//	int *p;
//	//����
//	for (i=0; i<10; i++) {
//		sum = sum + arr[i];
//	}
//	printf("sum is %d\n", sum);
//	sum = 0;
//	for (p=arr; p<=arr+9; p++) {
//		sum += *p;
//	} 
//	printf("sum is %d\n", sum);

	//�������
	char line[MAXLINE];
	
	printf("input the string:\n");
	gets(line);
	encryptArr(line);
	printf("after being encrypted string is %s\n", line);
	 
	return 0; 
}
//������ʽ 
void encryptArr (char s[]) 
{
	int i;
	for (i=0; s[i]!='\0'; i++) {
		if (s[i] == 'z') {
			s[i] == 'a';
		} else {
			s[i] += 1; 
		}
	}
}
//ָ����ʽ 
void encrypt (char *s)
{
	while(*s != '\0') {
		if (*s == 'z') {
			*s = 'z';
		} else {
			*s += 1;
		}
		s++;
	} 
}















