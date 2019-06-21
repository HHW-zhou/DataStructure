#include<stdio.h>
#include<stdlib.h>
#include "mgraph.h"

//采用邻接矩阵表示法，构造图G
Status CreateGraph(MGraph *G)
{
	scanf(G->kind);
	switch (G->kind)
	{
		case DG:	return CreateDG(G);			//构造有向图G
		case DN:	return CreateDN(G);			//构造有向网G
		case UDG:	return CreateUDG(G);		//构造无向图G
		case UDN:	return CreateUDN(G);		//构造无向网G
		default:	return ERROR;
	}
}

//返回图中元素的位置
int LocateVex(MGraph G,VertexType e)
{

}

//无向网
Status CreateUDN(MGraph *G)
{
	int i,j,k;
	int v1,v2,w;

	scanf(&G->vexnum,&G->arcnum);				//输入顶点数和弧数
	for (int i = 0; i < G->vexnum; i++)
		scanf(&G->vexs[i]);						//构造顶点向量
	
	for( i = 0; i < G->vexnum; i++)
		for ( j = 0; j < G->vexnum; j++)
		{
			G->arcs[i][j].adj = INFINITY;		//初始化邻接矩阵{无穷，NULL}
			G->arcs[i][j].adj = NULL;			//
		}
			
	for( k = 0; k < G->arcnum; k++)
	{
		scanf(&v1, &v2, &w);
		i = LocateVex(*G,v1);
		j = LocateVex(*G,v2);
		G->arcs[i][j].adj = w;
		G->arcs[j][i] = G->arcs[i][j];
	}

	return OK;
}//CreateUDN

















