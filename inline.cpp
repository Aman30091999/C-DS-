#include<iostream>
#include<conio.h>
using namespace std;
class operation
{int a,b,add, sub;
public:
    inline void set()
    {
        cout<<"enter value of a";
        cin>>a;
        cout<<"enter value of b";
        cin>>b;
    }
    inline void addition()
{
    add=a+b;
    cout<<"\n addition"<<add;

}
inline void substract()
{
    sub=a-b;
    cout<<"\n substract"<<sub;
}
};
int main()
{

    operation d;
    d.set();
    d.addition();
    d.substract();
    getch();
    }
