#include<stdio.h>
#include<stdlib.h>
#include "sqstack.h"

Status InitStack(SqStack *S)
{
	S->top = -1;
	
	return OK;
}

Status GetTop(SqStack S, ElemType *e)
{
	if( S.top == -1)
		return ERROR;

	*e = S.data[S.top];
	
	return OK;
}

Status Push(SqStack *S, ElemType e)
{
	if(S->top + 1 >= MAX_SIZE)
		return ERROR;
	
	S->data[++S->top] = e;
	
	return OK;
}

Status Pop(SqStack *S, ElemType *e)
{
	//printf("Befor pop ==> %p\n",S->top);
	
	if( S->top == -1)
		return ERROR;
		
	
	//*e = *--S->top;

	*e = S->data[S->top--];
	
	
	//printf("After pop ==> %p\n",S->top);
	
	return OK;
}


































