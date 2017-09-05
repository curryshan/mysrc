#include <stdio.h>

//结构体定义有三种形式

//单独定义
//先定义一个结构体
//再定义结构体变量

//混合定义
//定义结构类型的同时
//定义结构变量
struct person{
	char name[10];
	int age;
}shan, meng; 
//实质上与第一种方式是一样的

//无类型名定义
//定义结构变量时省略结构名
struct {
	char name[10];
	int age;
} hao, hao1; 
//由于没有给出结构名，只能用这一次
//有点类似匿名函数


int main()
{
	//结构变量初始化
	struct person p1 = {"lalala", 10};
	printf("sizeof struct person %d\n", sizeof(p1)); 
	
	//结构变量允许整体赋值(类型相同)
	struct person p2;
	p2 = p1;
	printf("p2.name is %s\n", p2.name); 
	return 0;
}
