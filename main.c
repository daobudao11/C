#include <stdio.h>
#include <stdlib.h>
#define MAXLENTH 100
typedef int DataType;

DataType* InitList(DataType* L);
int ListEmpty(L);
GetElem(DataType L, int i, DataType* e);
ClearList(DataType* L);
int LocateElem(DataType L,DataType e);
ListInsert(DataType* L, int i, DataType e);
DataType ListDelete(DataType* L, int i, DataType* e);
int ListLenth(DataType *L);

int main(void)
{
	int lenth;
	DataType list[MAXLENTH] = {4,1};

	lenth = ListLenth(list);
	printf("%d\n", lenth);
	printf("%d\n", ListEmpty(list));

	DataType e = 0;
	GetElem(list, 0, &e);
	printf("%d\n", e);
	
	return 0;
}

DataType* InitList(DataType* L)
{//建立空闲性列表L
	
}

int ListEmpty(L)
{//空列表1 非空0
	if (ListLenth(L))
		return 0;
	else
		return 1;
}

GetElem(DataType* L, int i, DataType* e)
{//第i个元素返回给e
	*e = L[i];
}

ClearList(DataType* L)
{//清空列表
	
}

int LocateElem(DataType L, DataType e)
{//查找与e相等的值 成功返回序号 失败返回0

}

ListInsert(DataType* L, int i, DataType e)
{//在第i个位置插入e

}

DataType ListDelete(DataType* L, int i, DataType* e)
{//删除第i个位置上的元素 并返回
	
}

int ListLenth(DataType *L)
{//返回元素个数
	int i = MAXLENTH - 1;
	while (L[i] == 0)
		i--;
	
	return i + 1;
}
