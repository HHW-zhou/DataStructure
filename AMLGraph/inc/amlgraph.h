#include "common.h"

//无向图的邻接多重表（Ajacency Multilist）储存表示

#define INFINITY __INT_MAX__						//最大值 无穷
#define MAX_VERTEX_NUM 20						//最大顶点个数

#define VRtype		int
#define InfoType	int
#define	VertexType	int 

typedef enum {unvisited, visited} VisitiIf;

typedef struct EBox{
	VisitiIf		mark;							//访问标记
	int 			ivex, jvex;						//两个顶点位置
	struct EBox		*ilink, *jlink;					//依附i,j顶点的下一条边
	InfoType		*info;							//附加信息
}EBox;

typedef struct VexBox{
	VertexType		data;
	EBox			*firstedge;
}VexBox;

typedef struct{
	VexBox			adjmulist[MAX_VERTEX_NUM];
	int				vexnum, edgenum;				//无向图的顶点编号和边编号
}AMLGraph;

Status CreateGraph(AMLGraph *G);
int LocateVex(AMLGraph G,VertexType e);