#include<stdio.h>
#include<stdlib.h>
#include "string.h"

void printHString(HString S)
{
	if(S.ch)
		printf("%s\n",S.ch);
	else
		printf("None\n");
}

Status initStr(HString *S)
{
	S->ch = NULL;
	S->length = 0;
}

Status ClearString(HString *T)
{
	if(T->ch)
		free(T->ch);
	
	T->ch = NULL;
	T->length = 0;
	
	return OK;
}

Status StrAssign(HString *T, char *S)
{
	ClearString(T);
	
	int i;
	char *c;
	
	for(i=0,c=S;*c;i++,c++);
	
	T->ch = (char *)malloc(sizeof(char)*(i+1));
	T->length = i;
	
	for(c=S;*c;c++,T->ch++)
		*T->ch = *c;
	
	*T->ch = '\0';
	T->ch = T->ch - i;
}

int StrCompare(HString T, HString S)
{
	for(;*T.ch && *S.ch;T.ch++,S.ch++)
		if(*T.ch != *S.ch)
			return *T.ch - *S.ch;
		
	return T.length - S.length;
}

Status Concat(HString *T, HString S, HString V)
{
	int len;
	len = S.length + V.length;
	
	ClearString(T);
	
	T->ch = (char*)malloc(sizeof(char)*(len+1));
	T->length = len;
	
	for(;*S.ch;S.ch++,T->ch++)
		*T->ch = *S.ch;
	
	for(;*V.ch;V.ch++,T->ch++)
		*T->ch = *V.ch;
	
	*T->ch = '\0';
	T->ch = T->ch - len;
	return OK;
}

Status SubString(HString *sub, HString S, int p, int len)
{
	if(p+len > S.length)
		return ERROR;
	
	ClearString(sub);
	
	sub->ch = (char*)malloc(sizeof(char)*(len+1));
	
	int i;
	for(i = p; i<p+len; i++)
		*sub->ch++ = S.ch[i];
		
	sub->length = len;
	*sub->ch = '\0';
	sub->ch -= len;
	
	return OK;
}

int Index(HString S, HString sub)
{
	// if(sub.length == 0)
		// return -1;
	
	int i,j;
	
	i = j = 0;
	while(i<S.length && j<sub.length)
	{
		if(S.ch[i] == sub.ch[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	
	if(j == sub.length)
		return i - j;
	
	return ERROR;
}

void getNext(HString sub, int next[])
{
	int i,j;
	
}

int KmpIndex(HString S, HString sub)
{
	//朱串指针不回溯
	//时间复杂度 O(n+m)
	
}

































