#include <stdio.h>
#include <stdbool.h>
struct point {
	int x;
	int y;
} p1, p2;

struct date {
	int y;
	int m;
	int d;
};

bool isLeap(struct date d);
int numberOfDays(struct date d);
int main()
{
	//结构类型
//	struct point p3 = {10,20};
//	p3.x = 100; 
//	printf("%d\n", p3.x);

//	p1 = (struct point){5,10};
//	printf("%d\n", p1.x);
//	p2 = p1;//赋值 值的赋值 
//	printf("%d\n", p2.x);

	//结构作为函数参数
	struct date today, tomorrow;
	printf("enter today y n d\n");
	scanf("%i %i %i", &today.y, &today.m, &today.d);
	
	if (today.d != numberOfDays(today)) {
		tomorrow.d = today.d + 1; 
		tomorrow.m = today.m;
		tomorrow.y = today.y;
	} else if (today.m == 12) {
		tomorrow.d = 1;
		tomorrow.m = 1;
		tomorrow.y = today.y + 1;  
	} else {
		tomorrow.d = 1;
		tomorrow.m = today.m + 1;
		tomorrow.y = today.y;
	}
	
	printf("tomorrow is %i-%i-%i\n", tomorrow.y, tomorrow.m, tomorrow.d);
	return 0;
}

//判断当前月有多天 
int numberOfDays(struct date d)
{
	int days;
	const int dayPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (d.m == 2 && isLeap(d)) {
		days = 29;
	} else {
		days = dayPerMonth[d.m-1];
	}
	return days;
} 


//判断闰年 
bool isLeap(struct date d)
{
	bool leap = false;
	if ((d.y%4 == 0 && d.y%100 != 0) || d.y%400 == 0) {
		leap = true;
	}
	return leap; 
}	





