#include <stdio.h>

int main()
{
	//const和指针的一些关系
	
	
	//指针是const
	//表示一旦得到某个变量的地址，不能再指向其他变量
	int i = 0;
	int *const q = &i;
	*q = 26; //没问题 改变的是指针所指向的变量的值
	q++; //错误，指针变量本身是不能更改的
	
	
	//指针所指的是const
	//表示不能通过指针去修改指向的变量（指向的变量此时不是const）
//	int j = 0;
//	const int *p = &j;
//	*p = 26; //错误 (*p)整体是const 
//	j = 26;  //ok
//	p = &k;  //ok

	//来 判断一下这些都是什么意思
//	int i;
//	const int *p1 = &i;//不能通过指针来修改指向变量的值 
//	int const *p2 = &i;//不能通过指针来修改指向变量的值
//	int *const p3 = &i;//指针的值不可以修改 

	//const数组
	//const int a[] = {1,2,3,4,5};
	//数组变量已经是const的指针了
	//所以这里的const表明数组的每个单元都是const int 
	return 0;
} 






