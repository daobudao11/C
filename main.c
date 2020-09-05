#include <stdio.h>
#include <stdlib.h>
#define MAXLENTH 100
typedef int DataType;

DataType* InitList(DataType* L);
int ListEmpty(L);
int GetElem(DataType L, int i, DataType* e);
ClearList(DataType* L);
int LocateElem(DataType* L,DataType e);
ListInsert(DataType* L, int i, DataType e);
ListDelete(DataType* L, int i, DataType* e);
int ListLenth(DataType *L);

int main(void)
{
	DataType list[MAXLENTH] = {4,1,5,6,7,8,8,90,11};
	DataType* delete = (DataType*)malloc(sizeof(DataType));

	ListInsert(list, 2, 999);
	ListDelete(list, 2, delete);

	for (int i = 0; i < ListLenth(list); i++)
		printf("%d\n", list[i]);
	printf("%d", *delete);

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

int GetElem(DataType* L, int i, DataType* e)
{//第i个元素返回给e
	if (i <= 0) {
		printf("请输入大于等于0\n");

		return 0;
	}
	*e = L[i - 1];
	return 1;
}

ClearList(DataType* L)
{//清空列表
	for (int i = 0; i < MAXLENTH; i++)
		L[i] = 0;
}

int LocateElem(DataType* L, DataType e)
{//查找与e相等的值 成功返回序号 失败返回0
	int i;
	for (i = 0; i < MAXLENTH; i++)
	{
		if (L[i] == e)
			return i + 1;
	}
	return 0;
}

ListInsert(DataType* L, int i, DataType e)
{//在第i个位置插入e
	int j = ListLenth(L);
	if (i > ListLenth(L) || i <= 0)
		printf("超出范围");

	else
	{
		if (ListLenth(L) == MAXLENTH)
			j--;
		while (j >= i)
		{
			L[j] = L[j - 1];
			j--;
		}
		L[i - 1] = e;
	}
	
}

ListDelete(DataType* L, int i, DataType* e)
{//删除第i个位置上的元素 并返回
	i--;
	int lenth = ListLenth(L);
	if (i >= lenth || i < 0)
		printf("超出范围");
	else
	{
		*e = L[i];
		while (i < lenth-1)
		{
			L[i] = L[i + 1];
			i++;
		}
		L[lenth - 1] = 0;
	}
	
}

int ListLenth(DataType *L)
{//返回元素个数
	int i = MAXLENTH - 1;
	while (L[i] == 0)
		i--;
	
	return i + 1;
}
