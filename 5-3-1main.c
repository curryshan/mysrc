#include <stdio.h>
#include "max.h"


//""Ҫ������������ڵ�ǰĿ¼ȥѰ������ļ�
//���û�У���������ָ����Ŀ¼ȥ��
//<>�ñ�����ֻ��ָ����Ŀ¼ȥ��

//��ʹ�úͶ��庯���ĵط���Ӧ��#include���ͷ�ļ�
 
int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d\n", max(a,b));
	return 0;
}
