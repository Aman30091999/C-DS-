#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a;
public:
    A()
    {
        a=0;
    }
    friend class B;
};
class B
{
    int b;
public:
    void show(A&)
    {
        cout<<a;
    }
};
int main()
{

    A a;
    B b;
    b.show(a);
    getch();
}
