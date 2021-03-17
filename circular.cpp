#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *createlist(struct node *last);
void display(struct node *last);
struct node* addtoempty(struct node *last,int value);
struct node* addatbeg(struct node *last,int value);
struct node* addatend(struct node *last,int value);
struct node* addafter(struct node *last,int value,int item);
struct node* del(struct node *last,int value);
int main()
{
    int choice,value,item;
    struct node *last=NULL;
    while(1)
    {

        printf("\n create list");
        printf("\n enter a choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
         last=createlist(last);
         break;
        case 2:
            display(last);
            break;
        case 3:
            printf("enter a number of lisr");
            scanf("%d",&value);
            last=addtoempty(last,value);
            break;
        case 4:
            printf("enter a number of list");
            scanf("%d",&value);
            last=addatbeg(last,value);
            break;
        case 5:
            printf("enter to list");
            scanf("%d",&value);
            last=addatend(last,value);
            break;
        case 6:
            printf("enter a number");
            scanf("%d",&value);
            printf("enter item new value after inserted");
            scanf("%d",&item);
            last=addafter(last,value,item);
            break;
        case 7:
            printf("enter delete");
            scanf("%d",&value);
            last=del(last,value);
            break;

        default:
            printf("invalid choice");
            }
    }
}
struct node *createlist(struct node *last)
{

    int i,n,value;
    printf("mant enrer a number");
    scanf("%d",&n);
    printf("enter data");
    scanf("%d",&value);
    last=addtoempty(last,value);
    for(i=2;i<=n;i++)
    {

    printf("enter data for the list");
        scanf("%d",value);
    last=addatend(last,value);

    }
    return (last);

}
struct node* del(struct node *last,int value)
{
 struct node *t,*p;
 if(last==NULL)
 {
     printf("list is empty");
     return (last);
 }
 if(last==last->next&&last->data==value)
 {
     t=last;
    last=NULL;
    return(last);
 }
 if(last->next->data==value)
{
t=last->next;
last->next=t->next;
return (last);
}
p=last->next;
while(p->next!=last)
{
    if(p->next->data==value)
    {
        t=p->next;
        p->next=t->next;
        return (last);

    p=p->next;}
    printf("list is not found");
}
}
struct node* addafter(struct node *last,int value,int item)
{
    struct node *t,*n;
    t=last->next;

do{
    if(t->data==item)
    {
        n=malloc(sizeof(struct node));
        n->data=value;
        n->next=t->next;
        t->next=n;
        if(t==last)
            last=n;
        return(last);
    }
    t=t->next;
}while(t!=last->next);
printf("%d",item);
}

struct node* addatend(struct node *last,int value)
{struct node *n;
n=malloc(sizeof(struct node));
n->data=value;
n->next=last->next;
last->next=n;
last=n;
return(last);
}
struct node* addtoempty(struct node *lasr,int value)
{struct node *n;
n=malloc(sizeof(struct node));
n->data=value;
last=n;
last->next=last;
return (last);
}
struct node* addatbeg(struct node *lasr,int value)
{struct node *n;
n=malloc(sizeof(struct node));
n->data=value;
n->next=last->next;
last->next=n;
return (last);
}
void dsplay(struct node *last)
{
    struct node *t;
    if(last==NULL)
    {

        printf("list is empty");
    }
    else{
            t=last->next;
    do
    {

        printf("%d",t->data);
        t=t->next;
    }while(t!=last->next);

    }

}
