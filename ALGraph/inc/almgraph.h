#include "common.h"

//图的邻接表(链表)储存表示

#define INFINITY __INT_MAX__						//最大值 无穷
#define MAX_VERTEX_NUM 20							//最大顶点个数

#define VRtype		int
#define InfoType	int
#define	VertexType	int 

typedef struct ArcNode
{
	int					adjvex;						//该弧所指向的顶点位置
	struct ArcNode		*nextarc;					//指向下一条弧
	InfoType			*info;						//附加信息
}ArcNode;

typedef struct VNode{
	VertexType			data;						//顶点数据
	ArcNode				*firstarc;					//顶点的首条弧
}VNode, AdjList[MAX_VERTEX_NUM];

typedef struct{
	AdjList				vertices;
	int					vexnum, arcnum;				//图的当前顶点数和弧数
	int 				kind;						//图的种类标志
}ALGraph;
