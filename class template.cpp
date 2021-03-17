#include<iostream>
#include<conio.h>
using namespace std;
class arraylist
{
private:
    struct controlblock
    {
        int capacity;
        int *arr_ptr;
    };
    controlblock *s;
public:
    int index,dta;
    arraylist(int capacity)
   {

   s=new controlblock;
    s->capacity=capacity;
    s->arr_ptr=new int[s->capacity];
   }
   void addelement(int index,int data)
   {
       if(index>=0&&index<=s->capacity-1)
        s->arr_ptr[index]=data;
       else
        cout<<"\n array index not valid";
   }
   void viewelement(int index,int &data)
   {
       if(index>=0&&index<=s->capacity-1)
        data=s->arr_ptr[index];
       else
        cout<<"\n array index not valid";

   }
   void viewlist()
   {

       int i;
       for(i=0;i<s->capacity;i++)
        cout<<" "<<s->arr_ptr[i];
   }
};
int main()
{

int data;
    arraylist a(4);
    a.addelement(0,32);
    a.viewelement(0,data);
    cout<<data;
    getch();
}
