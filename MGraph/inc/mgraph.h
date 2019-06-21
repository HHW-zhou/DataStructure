#include "common.h"

//图的邻接矩阵（数组）储存表示

#define INFINITY __INT_MAX__						//最大值 无穷
#define MAX_VERTEX_NUM 20						//最大顶点个数

#define VRtype		int
#define InfoType	int
#define	VertexType	int 

typedef enum {DG,DN,UDG,UDN} GraphKind;			//{有向图，有向网，无向图，无向网}

typedef struct ArcCell{
	VRtype		adj;							//VRType是顶点关系类型。对于无权图，用1或0
												//表示是否相邻；对于带权图，则为权值类型

	InfoType	*info;							//该弧相关信息的指针
}ArcCell, AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

typedef struct
{
	VertexType	vexs[MAX_VERTEX_NUM];			//顶点向量
	AdjMatrix	arcs;							//邻接矩阵
	int			vexnum,arcnum;					//图的当前顶点数和弧数  vertex,arc
	GraphKind	kind;							//图的种类标志
}MGraph;

Status CreateGraph(MGraph *G);
int LocateVex(MGraph G,VertexType e);