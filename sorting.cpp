#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }

    }
}
void print(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,56,3,78,65};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printf("sorting");
    print(arr,n);
    return 0;
}
