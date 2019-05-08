#include<stdio.h>
#include<stdlib.h>
#include "string.h"



void test()
{
	HString T,S,V,sub;
	
	initStr(&T);
	initStr(&S);
	initStr(&V);
	initStr(&sub);
	
	StrAssign(&T,"Hello");
	StrAssign(&S," World!");
	
	int i;
	i = StrCompare(T,S);
	printf("%d\n",i);
	
	Concat(&V,T,S);
	printHString(V);
	
	SubString(&sub,V,4,10);
	printf("%d\n",sub.length);
	printHString(sub);
	
	int index;
	index = Index(V,sub);
	printf("%d\n",index);
}

int main(int argc,char args[])
{
	test();
}



























