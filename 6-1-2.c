#include <stdio.h>

int search(int key, int a[], int len)
{
	int ret = -1;
	int i;
	for (i=0; i<len; i++){
		if (a[i]==key) {
			ret = i;
			break;
		}
	}
	return ret;
}

struct {
	int index;
	char *name;
} coins[] = {
	{1,"penny"},
	{5,"nickel"},
	{10,"dime"},
	{25,"quarter"},
	{50,"half-dollar"}
};
int main()
{
	//美元的硬币对应关系
	
	//第一种 用两个数组
//	int index[] = {1,5,10,25,50};
//	char *name[] = {"penny","nickel","dime","quarter","half-dollar"};
//	int money;
//	
//	printf("please enter money:\n");
//	scanf("%d", &money);
//	int r = search(money, index, (sizeof(index)/sizeof(index[0])));
//	if (r > -1) {
//		printf("%d is %s\n", money, name[r]);
//	} 
	
	//但是这种割裂的两个数组对cache是不友好的
	int index[] = {1,5,10,25,50};
	char *name[] = {"penny","nickel","dime","quarter","half-dollar"};
	int i, money;
	
	printf("please enter money:\n");
	scanf("%d", &money);
	for (i=0; i<sizeof(coins)/sizeof(coins[0]); i++) {
		if (money == coins[i].index) {
			printf("%s\n", coins[i].name);
			break;
		}
	}
	return 0;
}





