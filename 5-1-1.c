#include <stdio.h>

int f(void);

int gAll = 12;
 
int main()
{
	//ȫ�ֱ���
	//����ȫ�ֱ�����ʼ�� ȫ�ֱ����ᱻ��ʼ��Ϊ0
	//���ر����Ͳ�һ���� 
	printf("in %s gAll = %d\n", __func__, gAll);
	f();		 
	return 0;
}

int f()
{
	printf("in %s gAll = %d\n", __func__, gAll);
	gAll++;
	printf("in %s gAll = %d\n", __func__, gAll);
}
