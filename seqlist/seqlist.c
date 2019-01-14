#include <stdio.h>
#include <stdlib.h>
#include "seqlist.h"

void init_seqlist(Seqlist *L)
{
	L->data = (int *)malloc(sizeof(int) * maxSize);
	L->n = 0;
	L->maxsize = maxSize; 
}

void clear(Seqlist *L)
{
	L->n = 0;
	free(L->data);
}

int Length(Seqlist *L)
{
	return L->n;
}

int isfull(Seqlist *L)
{
	return L->n == L->maxsize;
}

int isempty(Seqlist *L)
{
	return L->n == 0;
}
//顺序表赋值
void create(Seqlist *L,int *arr,int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		L->data[i] = arr[i];
	}
	L->n = n;
}
//根据数据找到下标
int search(Seqlist *L,int data)
{
	int i,j=L->n;
	for(i=0;i<j;i++)
	{
		if(L->data[i] == data)
			return i;
	}
	return -1;

}
//根据下标返回
int locate(Seqlist *L,int i)
{
	return L->data[i];
}
//i从0开始 i就是插入的下标
void insert(Seqlist *L,int data,int i)
{
	//移动 i 到 n-1 的数据 下标
	int j = L->n -1;
	for (j;j>=i;j--)
	{
		L->data[j+1] = L->data[j];
	}
	L->data[i] = data;
	L->n++;
}
//删除表中第i个元素  i从0开始 i就是下标 
void del(Seqlist *L,int i)
{
	//移动 第 i 个到 n-1 元素
	int j=L->n -1;
	for(j;j>=i;j--)
	{
		L->data[j] = L->data[j+1];
	}
	L->n--;
}
void display(Seqlist *L)
{
	int i=L->n;
	int j;
	for(j=0;j<i;j++)
	{
		printf("%d:%d\n",j,L->data[j]);
	}
	printf("\n");
}
