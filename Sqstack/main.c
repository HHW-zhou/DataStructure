#include<stdio.h>
#include<stdlib.h>
#include "sqstack.h"

void conversion()								//numerical change
{
	SqStack S;
	int n;
	ElemType e;
	
	InitStack(&S);
	
	printf("Input a number: ");
	scanf("%d",&n);
	
	while(n)
	{
		Push( &S, n%2 );
		n = n/2;
	}
	
	while(Pop(&S,&e))
		printf("%d",e);
	
	printf("\n");
}

void bracket_match()							//match brackets
{
	SqStack S;
	ElemType e,output,target;
	
	InitStack(&S);
	
	while(1)
	{
		printf("Input a character:");
		scanf("\n%c",&e);
		if( e == '(' || e == '[' || e == '{' )
		{
			Push(&S,e);
		}
		else if( e == ')' || e == ']' || e == '}' )
		{
			if( e == ')')
				target = '(';
			if( e == ']')
				target = '[';
			if( e == '}')
				target = '{';
			
			if(!GetTop(S,&output))
			{
				printf("Stack is empty!\n");
				continue;
			}
			if( output == target)
			{
				printf("success\n");
				Pop(&S,&output);
			}
			else
				printf("failed\n");
		}
	}
}

int main(int argc,char args[])
{
	//conversion();
	bracket_match();
}



























