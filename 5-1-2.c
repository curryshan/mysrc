#include <stdio.h>

int f(void);
int s(void);
int gAll = 0;

int main()
{
	//��̬���ر���
//	f();
//	f();
//	f();


	//��̬���ر���ʵ������һ��ȫ�ֱ���
	//��̬������ȫ�ֱ�����������
	//��̬�����б��ر����������� 
	s();
	return 0;
} 

f (void)
{	 
	static int all = 1;
	all++;
	printf("all = %d\n", all);
}

s (void)
{
	int i = 0; 
	static int all = 1;
	printf("&gAll = %p\n", &gAll);
	printf("&all = %p\n", &all);
	printf("&i = %p\n", &i);
} 



