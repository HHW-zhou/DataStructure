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

//�ӿգ�Q->rear == Q->front
//������(Q->rear+1)MAX_SIZE == Q->front
//rearʼ��ָ�����һ��Ԫ�أ�frontʼ��Ϊ����Ԫ��+1
//rear˳ʱ����ת
typedef struct{							//���е�˳��ṹ
	ElemType	data[MAX_SIZE];
	int 		front;
	int			rear;
}SqQueue;

Status InitQueue(SqQueue *Q);			//����һ���ն���

Status DestroyQueue(SqQueue *Q);		//����S

Status ClearQueue(SqQueue *Q);			//�Ѷ����ÿ�

Status QueueEmpty(SqQueue Q);			//�ж�Q�Ƿ�Ϊ��
	
Status QueueFull(SqQueue Q);			//�ж϶��Ƿ�Ϊ��

int QueueLength(SqQueue Q);				//����S�ĳ���

Status GethHead(SqQueue Q, ElemType *e);	//��ȡ����Ԫ�أ�������e��

Status EnQueue(SqQueue *Q, ElemType e);		//��e���

Status DeQueue(SqQueue *Q, ElemType *e);		//����

Status QueueTraverse(SqQueue *Q, Status visit());	//������Ԫ��ִ��visit