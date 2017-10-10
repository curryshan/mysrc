#include <stdio.h>

//线性表 
int main()
{
	//方法一是顺序结构直接表示
	//方法二是顺序结构表示非零项
	//用结构数组表示
	//数组的分量是由系数和指数组成
	//对应一个非零项
	//方法三链表结构存储非零项 
	
	
	//数组连续空间顺序存放
	typedef struct{
		ElementType Data[MAXSIZE];
		int Last;
	} List;
	
	List L, *PtrL;
	//访问下标为i的元素
	//L.Data[i]或Ptrl->Data[i] 
	//线性表的长度
	//L.Last+1或PtrL->Last+1
	
	//初始化(建立空的顺序表)
	List *MakeEmpty()
	{
		List *PtrL;
		PtrL = (List*) malloc (sizeof(List));
		PtrL->Last = -1;
		return PtrL;
	} 
	
	//查找
	int Find (ElememtType X, List *PtrL)
	{
		//平均比较次数为(n-1)/2    
		//O(n) 
		int i = 0;
		while (i<=PtrL->Last && PtrL->Data[i]!=X) {
			$i++;
		}
		if (i>PtrL->Last) {
			return -1;
		} else {
			//返回的是存储位置 
			return i;
		}
	}
	
	//插入 第i个位置插入
	//先移动 再插入
	void Insert (ElementType X, int i, List *PtrL)
	{
		int j;
		//MAXSIZE是数组的大小 
		if (PtrL->Last == MAXSIZE-1) {
			printf("表满");
			return;
		}
		if (i<1 || i>PtrL->Last+2) {
			ptinrf("插入位置错误");
			return;
		}
		//从后向前挪
		//平均移动次数n/2 O(n) 
		for (j=PtrL->Last; j>=i-1; j--) {
			Ptrl->Data[j+1] = PtrL->Data[j];	
		}
		Ptrl->Data[i-1] = X; 
		PtrL->Last++;
		return;
	}
	
	//删除 删除第i个元素 
	void Delete(ElementType i, List *PtrL)
	{
		if (i<1 || i>Ptrl->Last+1) {
			printf("位置不合法");
			return; 
		} 
		//平均移动次数为(n-1)/2
		//O(n) 
		for (j=i; j<PtrL->Last; j++) {
			PtrL->Data[j-1] = PtrL->Data[j]; 
		}
		PtrL->Last--;
		return;
	} 
	
	
	
	
	
	return 0;
}
