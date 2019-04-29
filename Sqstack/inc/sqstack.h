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

typedef struct{							//ջ��˳��ṹ
	ElemType	data[MAX_SIZE];
	int			top;
}SqStack;

Status InitStack(SqStack *S);			//����һ����ջ

Status DestroyStack(SqStack *S);		//����S

Status ClearStack(SqStack *S);			//��S��λ��ջ

Status StackEmpty(SqStack S);			//�ж�S�Ƿ�Ϊ��ջ

int StackLength(SqStack S);				//����S�ĳ���

Status GetTop(SqStack S, ElemType *e);	//��ȡջ��Ԫ�أ�������e��

Status Push(SqStack *S, ElemType e);		//��e��ջ

Status Pop(SqStack *S, ElemType *e);		//��ջ

Status StackTraverse(SqStack *S, Status (*visit)());