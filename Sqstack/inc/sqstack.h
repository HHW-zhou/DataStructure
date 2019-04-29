#define	TRUE	1
#define	FALSE	0
#define	OK		1
#define	ERROR	0
#define	INFEASIBLE	-1
#define	OVERFLOW	-2

#define	STACK_INIT_SIZE	3
#define	STACKINCREMENT	1
#define MAX_SIZE 100

typedef	int Status;	
typedef char ElemType;

typedef struct{							//栈的顺序结构
	ElemType	data[MAX_SIZE];
	int			top;
}SqStack;

Status InitStack(SqStack *S);			//构建一个空栈

Status DestroyStack(SqStack *S);		//销毁S

Status ClearStack(SqStack *S);			//把S置位空栈

Status StackEmpty(SqStack S);			//判断S是否为空栈

int StackLength(SqStack S);				//返回S的长度

Status GetTop(SqStack S, ElemType *e);	//获取栈顶元素，保存在e中

Status Push(SqStack *S, ElemType e);		//将e入栈

Status Pop(SqStack *S, ElemType *e);		//出栈

Status StackTraverse(SqStack *S, Status (*visit)());