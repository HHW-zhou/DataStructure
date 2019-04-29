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

//队空：Q->rear == Q->front
//队满：(Q->rear+1)MAX_SIZE == Q->front
//rear始终指向最后一个元素，front始终为队首元素+1
//rear顺时针旋转
typedef struct{							//队列的顺序结构
	ElemType	data[MAX_SIZE];
	int 		front;
	int			rear;
}SqQueue;

Status InitQueue(SqQueue *Q);			//构建一个空队列

Status DestroyQueue(SqQueue *Q);		//销毁S

Status ClearQueue(SqQueue *Q);			//把队列置空

Status QueueEmpty(SqQueue Q);			//判断Q是否为空
	
Status QueueFull(SqQueue Q);			//判断队是否为满

int QueueLength(SqQueue Q);				//返回S的长度

Status GethHead(SqQueue Q, ElemType *e);	//获取队首元素，保存在e中

Status EnQueue(SqQueue *Q, ElemType e);		//将e入队

Status DeQueue(SqQueue *Q, ElemType *e);		//出队

Status QueueTraverse(SqQueue *Q, Status visit());	//对所有元素执行visit