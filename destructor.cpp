#include<iostream>
#include<conio.h>
using namespace std;
int i;
class A
{

public:
    ~A()
    {
        i=10;
    }
};
int foo()
{

    i=2;
    A ob;
    return i;
}
int main()
{

    cout<<foo()<<endl;
    getch();
}
