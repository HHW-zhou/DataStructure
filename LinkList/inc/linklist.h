#include "common.h"

typedef struct LNode{
	ElemType		data;
	struct LNode	*next;
}LNode, *LinkList;

//获取第i个元素值，找到返回OK，将元素存在e中返回
Status GetElem(LinkList L, int i, ElemType *e);

//将元素e插入到链表中第i个位置
Status ListInsert(LinkList L, int i, ElemType e);

//删除第i个元素，并将该元素放到e中
Status ListDelete(LinkList L, int i, ElemType *e);

//创建大小为n的链表，从标准输入取值。头插法
void CreateList(LinkList *L, int n);

//合并两个链表a和b，存到c中
void MergeList(LinkList La, LinkList Lb, LinkList *Lc);

//输出链表
void PrintList(LinkList L);

//获取链表长度（不包含头节点）
int GetLength(LinkList L);