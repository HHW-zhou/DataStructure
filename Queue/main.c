#include<stdio.h>
#include<stdlib.h>
#include "sqQueue.h"



void test()
{
	SqQueue Q;
	
	InitQueue(&Q);
	
	ElemType a[] = {1,2,3,4,5,6,7};
	int i;
	ElemType r;
	
	for(i=0;i<7;i++)
	{
		if(!EnQueue(&Q,a[i]))
		{
			printf("EnQueue ERROR\n");
			break;
		}
	}
		
	
	for(i=0;i<8;i++)
	{
		if(!DeQueue(&Q,&r))
		{
			printf("DeQueue ERROR\n");
			break;
		}
		printf("%d\n",r);
	}
}

int main(int argc,char args[])
{
	test();
}



























