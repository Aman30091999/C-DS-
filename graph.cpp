#include<stdio.h>
#include<stdlib.h>
struct adjnode
{
    int dest;
    struct adjnode* next;
};
struct adj
{
    struct adjnode *head;
};
struct graph{
int v;
struct adj* array;
};
struct adjnode* newadjnode(int dest){
struct adjnode* newnode;
(struct adjnode*)malloc(sizeof(struct adjnode));
newnode->dest=dest;
newnode->next=NULL;
return newnode;
}
struct graph* creategraph(int v)
{
struct graph* graph=(struct graph*)malloc(sizeof(struct graph));
graph->v=v;
graph->array=(struct adj*)malloc(sizeof(struct adj));
int i;
for(i=0;i<v;++i)
    graph->array[i].head=NULL;
return graph;
}
void addedge(struct graph* graph,int src,int dest)
{

    struct adjnode* newnode=newadjnode(dest);
    newnode->next=graph->array[src].head;
    graph->array[src].head=newnode;
    newnode=newadjnode(src);
    newnode->next=graph->array[dest].head;
    graph->array[dest].head=newnode;
}
void printgraph(struct graph* graph)
{
    int v;
    for(v=0;v<graph->v;++v)

        struct adjnode* pcrawl=graph->array[v].head;
        printf("\n adjcancy :%d\n head",v);
        while(pcrawl){
            printf("->%d",pcrawl->dest);
            pcrawl=pcrawl->next;
        }
        printf("\n");
}int main()
{

    int v=5;
    struct graph* graph= creategraph(v);
    addedge(graph,0,1);
    addedge(graph,0,4);
    addedge(graph,1,2);
    addedge(graph,1,3);
    addedge(graph,1,4);
    addedge(graph,2,3);
    addedge(graph,3,4);
    printgraph(graph);
    return 0;
}
