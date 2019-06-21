#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"

int main(int argc, char *argv)
{
	LinkList L,Lb,Lc;
	ElemType *e;
	
	L=Lb=Lc=NULL;
	e = malloc(sizeof(ElemType));

	CreateList(&L,5);
	CreateList(&Lb,5);
	
	GetElem(L,5,e);
	printf("The 5th element is %d\n",*e);
	
	ListInsert(L,1,11);
	
	GetElem(L,0,e);
	printf("The 0th element is %d\n",*e);
	
	GetElem(L,1,e);
	printf("The 1th element is %d\n",*e);
	
	GetElem(L,11,e);
	printf("The 11th element is %d\n",*e);
	
	GetElem(L,12,e);
	printf("The 12th element is %d\n",*e);
	
	ListDelete(L,1,e);
	printf("The 1th element has been deleted, value is %d\n",*e);
	
	PrintList(L);
	PrintList(Lb);
	PrintList(Lc);
	printf("%p\n",L);
	printf("%p\n",Lb);
	printf("%d\n",GetLength(Lb));
	printf("%p\n",Lc);
	
	MergeList(L,Lb,&Lc);

	PrintList(L);
	PrintList(Lb);
	PrintList(Lc);
	printf("%p\n",L);
	printf("%p\n",Lb);
	printf("%d\n",GetLength(Lb));
	printf("%p\n",Lc);
}