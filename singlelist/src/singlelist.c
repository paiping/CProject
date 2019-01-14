#include "singlelist.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//链表初始化 建立头节点
void init_single_list(Node *list)
{
	list = (Node *)malloc(sizeof(Node));
	list->next = NULL; 
}
//链表节点插入
//输入 链表节点指针 数据节点 插入位置 从1开始
//输出 空
void insert(Node *list,Node *data,int i)
{
	Node *p=locate(list,i - 1 );
	data->next = p->next;
	p->next = data;
}

//链表定位 
//输入 链表节点指针 位置
//输出 该链表节点的指针 //position 1-n
//                      position等于0时候 返回头节点
Node *locate(Node *list,int i)
{
	Node *p=list; //获取头节点
	int k;
	for(k=0;k<i;k++)//往前移动节点
	{
		p=p->next;
	}
	return p;
}

void display(Node *list)
{
	int i=1;
	Node *p=list->next;
	while(p!=NULL)
	{
		printf("%d:%d\n",i,p->intdata);
		i++;
		p=p->next;
	}
	printf("\n");
}
//链表节点删除
//输出 链表节点指针 删除节点位置 i从1开始
//输出 空
void del(Node *list,int i)
{
	Node *p = locate(list,i-1);
	Node *q = p->next;	//要删除的节点 
	p->next = p->next->next;//链表重新链接
	free(q);
}
//链表查询
//输出单个节点信息
//i从1开始
void query(Node *list,int i)
{
	Node *p = locate(list,i);	
	printf("%d\n",p->intdata);
}
//链表修改
//得到链表节点后对链表节点重新赋值


//清空链表
void clear(Node *list)
{
	Node *p;
	while(p!=NULL)
	{
		p=list->next;
		list->next = p->next;//头节点指向下一个节点
		free(p);//删除除了头节点之外的节点
	}
}
//计算表长度 不算头节点
int Length(Node *list)
{
	int count=0;
	Node *p = list->next;
	while(p!=NULL)
	{
		count ++;
		p=p->next;
	}
	return count ;
}
//头插法
void Head(Node *list,Node *data)
{
	Node *p = list->next; //获取第一个节点
	list->next = data;//头节点重新指向 新节点作为第一个节点
	data->next = p;//新节点介入链表
}
//尾插法
void Tail(Node *list,Node *data)
{
	int i=Length(list);
	Node *p=locate(list,i);
	p->next = data;
}
