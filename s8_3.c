#include <stdio.h>
#include <string.h>

int main()
{
	//�ַ�������
	
	// scanf & printf
	// scanf���س���ո��������
	// ���Զ�������������Զ�����'\0'������
	// ����������
	// �������Ϊ�ַ��������� 
//	char s[10];
//	scanf("%s", s); 
	
	// printf�����'\0'����
	// �������Ϊ�ַ����������ַ������� 
//	printf("%s\n", s); 

	// gets & puts
	// gets�������ַ���������
	// ����������õ�һ���ַ���
	// ���س����������Զ�������������Զ�����'\0'������
	// ���������� ������ո� �з���ֵ
//	gets(s)
	
	// puts�����������ַ����������ַ�������
	// ���ʱ��'\0'ת��Ϊ'\n'�Զ�����
	// �ɹ�����'\n', ʧ�ܷ���EOF
	
	
	// ��̬�����ڴ� malloc
	// ����ԭ�� void * malloc(unsigned size)
	// ���ڴ�Ķ�̬�洢���з���һ�����ռ�
	// �䳤��Ϊsize��������ɹ�
	// ����ָ���������ڴ�ռ����ʼ��ַ��ָ��
	// ʧ�ܷ���NULL
	// f����ֵΪ(void *)���ͣ��ھ���ʹ����
	// ������ֵת��Ϊ�ض�ָ�����ͣ�����һ��ָ��
//	int *p;
//	p = (int *) malloc (n*sizeof(int));
	
	// ��̬�����ڴ� calloc
	// malloc��������Ĵ洢�鲻���κ�����
	// calloc������������г�ʼ��
//	int *p;
//	p = (int *) calloc (n, sizeof(int)); 

	// ��̬�����ͷź��� free
	// ������ڴ���ʹ����ɺ�����ͷ�
	// ԭ�� void free (void * ptr)
	// ptrָ��Ҫ�ͷſռ���׵�ַ
	
	// ������������ĺ�(��̬�ڴ����)
	int i, number, sum, *p;
	printf("please enter number:\n");
	scanf("%d", &number);
	if (p = (int * ) malloc(number*sizeof(int))) {
		printf ("please enter some number:\n");
		for (i=0; i<number; i++) {
			scanf("%d", p+i);
		}
		sum = 0; 
		while (*p) {
			sum += *p++;
		}
		printf("sum is %d", sum); 
	} else {
		printf("not able to allocate \n");
	}
	return 0;
} 







