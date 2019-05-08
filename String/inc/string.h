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

typedef struct{							//堆分配（动态变长分配）					
	char 	*ch;
	int 	length;
}HString;

Status initStr(HString *S);

Status StrAssign(HString *T, char *S);	//生成一个值为s的串T

Status StrCopy(HString *T, char *S);

Status StrEmpty(HString T);

int StrCompare(HString T, HString S);		//如果T>S，返回值>0；T=S，返回0；T<S，返回值<0；T

int StrLength(HString T);

Status ClearString(HString *T);

Status Concat(HString *T, HString S, HString V);

Status SubString(HString *sub, HString S, int p, int len);

int Index(HString S, HString T);			//返回T第一次在S中出现的位置

Status Replace(HString *S, HString T, HString V);		//用V替换掉所有的T

Status StrInsert(HString *S, int p, HString T);			//在S的第p个位置之前插入T

Status StrDelete(HString *S, int p, int len);			//从S的第p个位置开始，删除长度len的串

Status DestroyString(HString *S);

int Index(HString S, HString sub);

int KmpIndex(HString S, HString sub);

void printHString(HString S);