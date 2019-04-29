#include<stdio.h>
#include<stdlib.h>
#include "sqQueue.h"

Status InitQueue(SqQueue *Q)
{
	Q->front = Q->rear = 0;
	
	return OK;
}

Status QueueEmpty(SqQueue Q)
{
	if(Q.rear == Q.front)
		return TRUE;
	
	return FALSE;
}

Status QueueFull(SqQueue Q)
{
	if((Q.rear+1)%MAX_SIZE == Q.front)
		return TRUE;
	
	return FALSE;
}

Status GethHead(SqQueue Q, ElemType *e)
{
	if(QueueEmpty)
		return ERROR;
	
	*e = Q.data[Q.front];
}

Status EnQueue(SqQueue *Q, ElemType e)
{
	if(QueueFull(*Q))
		return ERROR;
	
	Q->data[(++Q->rear)%MAX_SIZE] = e;
	
	return OK;
}

Status DeQueue(SqQueue *Q, ElemType *e)
{
	if(QueueEmpty(*Q))
		return ERROR;
	
	*e = Q->data[(++Q->front)%MAX_SIZE];
	
	return OK;
}


































