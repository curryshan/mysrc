#include <stdio.h>

//student�ṹ�� 
struct student {
	int no;
	char name[10];
	int math, computer;
	double avg;
}; 

int main()
{
	//�ṹ����
	//(�������ͨ�����������ṹ����)
	
	//����n��ѧ���ɼ�
	//��ƽ��������
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
	
	//ѡ������
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
	
	//��С�������
	printf("the sorted studetns is:\n");
	for (i=0; i<count; i++) {
		printf("%s avg is %d\n", students[i].name, students[i].avg);
	}
	
	return 0;
}
