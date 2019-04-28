#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"

LinkList FindPre(LinkList L, int i)
{
	if(i<1)
		return NULL;
	
	LinkList p;
	int j;
	
	p = L;
	j = 0;
	
	while( p && j<i-1)
	{
		p = p->next;
		j++;
	}
	
	if( !p || j>i)
		return NULL;
	
	return p;
}

Status GetElem(LinkList L, int i, ElemType *e)
{
	LinkList p;
	int j;
	
	p = FindPre(L,i);				//找到上一个元素
	if(!p)							//未找到
	{
		*e = -999;
		return ERROR;
	}
		
	
	if(!p->next)					//找到的是最后一个元素
	{
		*e = -999;
		return ERROR;
	}
		
	*e = p->next->data;
	return OK;
}

Status ListInsert(LinkList L, int i, ElemType e)
{
	LinkList p,s;
	int j;
	
	p = FindPre(L,i);				//找到上一个元素
	
	if(!p)							//未找到
		return ERROR;
	
	s = (LinkList)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

Status ListDelete(LinkList L, int i, ElemType *e)
{
	LinkList p,this;
	int j;
	
	p = FindPre(L,i);
	
	if(!p || !p->next)			//未找到或找到最后一个元素
		return ERROR;
		
	this = p->next;
	p->next = this->next;
	
	*e = this->data;
	free(this);
	
	return OK;
}

void CreateList(LinkList *L, int n)
{
	LinkList p;
	int i;
	
	*L = (LinkList)malloc(sizeof(LNode));
	(*L)->next = NULL;
	
	for( i=n; i>0; i--)
	{
		p = (LinkList)malloc(sizeof(LNode));
		//printf("input the next data:\n");
		scanf("%d",&p->data);
		p->next = (*L)->next;
		(*L)->next = p;
	}
}

void MergeList(LinkList La, LinkList Lb, LinkList *Lc)
{
	if(!La || !Lb)
	{
		if(!La && !Lb)
			*Lc = *Lc;
		else if(!La)
			*Lc = Lb;
		else
			*Lc = La;
		return;
	}
	
	if( La == Lb)
	{
		*Lc = La;
		return;
	}
		
	
	LinkList pa,pb,pc;
	
	pa = La->next;
	pb = Lb->next;
	*Lc = pc = La;

	while( pa && pb)
	{
		if(pa->data <= pb->data)
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
			
	}

	pc->next = pa ? pa:pb;
}

void PrintList(LinkList L)
{
	if(!L)
	{
		printf("List does not exist!\n");
		return;
	}

	LinkList this;
	this = L->next;

	printf("\nList elements are as follows:\n");
	
	while(this)
	{
		printf("%d,",this->data);
		this = this->next;
	}
	printf("\n--------End--------\n");
}

int GetLength(LinkList L)
{
	if(!L)
		return 0;
	
	int len;
	L = L->next;
	
	while(L)
	{
		len++;
		L = L->next;
	}
	
	return len;
}























