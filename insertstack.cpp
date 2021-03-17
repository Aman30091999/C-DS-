#include<stdio.h>
#include<conio.h>
#define max 4
int a[max],top=-1;
void push();
void display();
int main()
{

    int ch;
    while(ch!=3)
    {
printf("enter choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
        case 2:
            display();
        default:
            printf("give a rong choice");
        }
    }
}

void push()
{

    int data;
    if(top==(max-1))
    {
        printf("overflow");
    }else{
    printf("enter a pushed value");
    scanf("%d",&data);
    top=top+1;
    a[top]=data;
    }
}
void display()
{
    int i;
    if(top>=0){
        for(i=top;i<0;i++)
        {

            printf("\n%d",a[i]);

        }
    }
    else{
        printf("stack is empty");
    }
}
