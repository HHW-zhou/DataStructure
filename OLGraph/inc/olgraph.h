#include "common.h"

//图的十字链表(Orthogonal List)储存表示

#define INFINITY __INT_MAX__						//最大值 无穷
#define MAX_VERTEX_NUM 20							//最大顶点个数

#define VRtype		int
#define InfoType	int
#define	VertexType	int 

typedef struct ArcBox
{
	int				tailvex, headvex;				//该弧的尾和头顶点的位置
	struct ArcBox	*hlink, *tlink;					//弧头相同和弧尾相同的弧的链域
	InfoType		info;							//附加信息
}ArcBox;

typedef struct VexNode{
	VertexType		data;
	ArcBox			*firstin, *firstout;			//该顶点的第一条入弧和出弧
}VexNode;

typedef struct{
	VexNode			xlist[MAX_VERTEX_NUM];			//表头向量
	int				vexnum, arcnum;					//顶点数和弧数
}OLGraph;
