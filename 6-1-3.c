#include <stdio.h>

int bin(int a[], int len, int key)
{
	int left = 0;
	int right = len - 1;
	int ret = -1;
	while (right > left){
		int mid = (left+right)/2;
		if (key == a[mid]){
			ret = mid;
			break;
		} else if (key > a[mid]){
			left = mid;
		} else {
			right = mid-1;
		}
	}
	return ret;
} 
int main()
{
	//¶þ·ÖËÑË÷
	int a[] = {1,2,45,55,65,77,88,100,200,210};
	int r = bin(a, (sizeof(a)/sizeof(a[0])), 88);
	if (r > -1){
		printf("%d\n", r);
	}
	return 0;
}





