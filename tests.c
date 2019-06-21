#include<stdio.h>
#include<stdlib.h>

#define INFINITY __INT_MAX__
typedef enum {DG,DN,UDG,UDN} GraphKind;			//{有向图，有向网，无向图，无向网}

typedef struct node
{
    int data;
}Node;


void func(Node *p)
{
    p->data = 11;
}

int main(int argc,char **args)
{
    Node p;
    func(&p);
    printf("%d\n",p.data);

    GraphKind a;
    a = UDG;
    printf("%d\n",a);

    int b;
    b = __INT_MAX__;
    printf("%d\n",b);
}