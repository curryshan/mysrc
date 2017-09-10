#include <stdio.h>

//student结构体 
struct student {
	int no;
	char name[10];
	int math, computer;
	double avg;
}; 

int main()
{
	//结构数组
	//(像理解普通类型那样理解结构类型)
	
	//输入n个学生成绩
	//按平均分排序
	int i, j, count, min;
	struct student students[50], temp;
	
	printf("please enter count:\n");
	scanf("%d", &count);
	
	for (i=0; i<count; i++) {
		printf("please enter no:\n");
		scanf("%d", &students[i].no);
		
		printf("please enter name:\n");
		scanf("%s", &students[i].name);
		
		printf("please enter math:\n");
		scanf("%d", &students[i].math);
		
		printf("please enter name:\n");
		scanf("%d", &students[i].computer);
		
		printf("%d %d", students[i].math, students[i].computer);
		students[i].avg = (students[i].math + students[i].computer)/2.0;
	}
	
	//选择排序
	for (i=0; i<count-1; i++) {
		min = i;
		for (j=i+1; j<count; j++) {
			if (students[j].avg>students[min].avg) {
					min	= j+1;	
			}
			temp = students[min];
			students[min] = students[i];
			students[i] = temp;
		}
	}
	
	//从小到大输出
	printf("the sorted studetns is:\n");
	for (i=0; i<count; i++) {
		printf("%s avg is %d\n", students[i].name, students[i].avg);
	}
	
	return 0;
}
