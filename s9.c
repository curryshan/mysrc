#include <stdio.h>
struct address {
	char city[10];
	char street[20];
	int code;
}; 
struct student {//学生信息结构体 
	int num;//学号
	char name[10];//姓名
	int computer,english,math;
	double average;//平均成绩 
	struct address addr;//定义通信地址 
};
int main()
{
	//计算并输出平均分最高的学生成绩
	int i,n;
	struct student s1, max;//两个结构变量
	printf("input n\n");
	scanf("%d", &n);
	printf("please enter three score\n");
	for (i=1; i<=n; i++) {
		printf("No.%d\n", i);
		scanf("%d %s %d %d %d", &s1.num, s1.name, 
		&s1.computer, &s1.english, &s1.math);
		s1.average = (s1.computer+s1.english+s1.math)/3.0;
		
		if (i == 1) max = s1;
		if (max.average < s1.average) max = s1;
	}
	printf("num:%d, name:%s, average:%.2lf\n", 
	max.num, max.name, max.average);
	
	return 0;
}
