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

typedef struct{							//�ѷ��䣨��̬�䳤���䣩					
	char 	*ch;
	int 	length;
}HString;

Status initStr(HString *S);

Status StrAssign(HString *T, char *S);	//����һ��ֵΪs�Ĵ�T

Status StrCopy(HString *T, char *S);

Status StrEmpty(HString T);

int StrCompare(HString T, HString S);		//���T>S������ֵ>0��T=S������0��T<S������ֵ<0��T

int StrLength(HString T);

Status ClearString(HString *T);

Status Concat(HString *T, HString S, HString V);

Status SubString(HString *sub, HString S, int p, int len);

int Index(HString S, HString T);			//����T��һ����S�г��ֵ�λ��

Status Replace(HString *S, HString T, HString V);		//��V�滻�����е�T

Status StrInsert(HString *S, int p, HString T);			//��S�ĵ�p��λ��֮ǰ����T

Status StrDelete(HString *S, int p, int len);			//��S�ĵ�p��λ�ÿ�ʼ��ɾ������len�Ĵ�

Status DestroyString(HString *S);

int Index(HString S, HString sub);

int KmpIndex(HString S, HString sub);

void printHString(HString S);