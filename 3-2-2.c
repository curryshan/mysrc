#include <stdio.h>

struct point {
	int x;
	int y;
}; 

struct point getStruct1(void);
struct point * getStruct2(struct point *ps);
void output(struct point p);

int main()
{
	//�Զ��庯��Ϊ�ṹ��ֵ
	struct point y = {0, 0};
	struct point a = {0, 1};

//	y = getStruct1();
//	output(y);
	
	output(y);
	getStruct2(&y);
	
	output(*getStruct2(&y));
	
	return 0;
}

//�ڲ�����һ����ʱ�ṹ���� 
struct point getStruct1(void)
{
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d %d\n", p.x, p.y);
	return p;
}

//ֱ�Ӵ���ָ��
struct point * getStruct2(struct point *ps)
{
//	scanf("%d", *ps.x);
//	scanf("%d", *ps.y);
	scanf("%d", &ps->x);// ->��ʾָ����ָ�Ľṹ�����еĳ�Ա 
	scanf("%d", &ps->y);
	printf("%d %d\n", ps->x, ps->y);
	return ps;
} 

void output(struct point p)
{
	printf("%d %d", p.x, p.y);
}








