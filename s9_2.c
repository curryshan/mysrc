#include <stdio.h>

//�ṹ�嶨����������ʽ

//��������
//�ȶ���һ���ṹ��
//�ٶ���ṹ�����

//��϶���
//����ṹ���͵�ͬʱ
//����ṹ����
struct person{
	char name[10];
	int age;
}shan, meng; 
//ʵ�������һ�ַ�ʽ��һ����

//������������
//����ṹ����ʱʡ�Խṹ��
struct {
	char name[10];
	int age;
} hao, hao1; 
//����û�и����ṹ����ֻ������һ��
//�е�������������


int main()
{
	//�ṹ������ʼ��
	struct person p1 = {"lalala", 10};
	printf("sizeof struct person %d\n", sizeof(p1)); 
	
	//�ṹ�����������帳ֵ(������ͬ)
	struct person p2;
	p2 = p1;
	printf("p2.name is %s\n", p2.name); 
	return 0;
}
