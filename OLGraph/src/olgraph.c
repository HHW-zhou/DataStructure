#include<stdio.h>
#include<stdlib.h>
#include "olgraph.h"



//采用十字链表存储表示，构造有向图G（G.kind=DG）
Status CreateDG(OLGraph *G)
{
    int i,j,k;
    int v1,v2;                                      //弧头和弧尾
    ArcBox *p;                                       //临时弧节点

    scanf(&G->vexnum,&G->arcnum);                   //输入顶点数和弧数，未设置附属信息
    for( i = 0; i < G->vexnum; i++)                 //输入顶点信息，入弧和出弧链置为NULL
    {
        scanf(&G->xlist[i].data);
        G->xlist[i].firstin = NULL;
        G->xlist[i].firstout = NULL;
    }

    for( k = 0; k < G->arcnum; k++)
    {
        scanf(&v1,&v2);
        i = LocateVex(G,v1);
        j = LocateVex(G,v2);

        p = (ArcBox *)malloc(sizeof(ArcBox));
        p->tailvex = i;
        p->headvex = j;
        p->hlink = G->xlist[j].firstin;
        p->tlink = G->xlist[i].firstout;
        p->info = NULL;

        G->xlist[j].firstin = G->xlist[i].firstout = p;                 //两条链表均为头插
    }
}//CreateDG















