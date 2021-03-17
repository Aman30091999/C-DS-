#include<iostream>
#include<conio.h>
using namespace std;
template <class x>
x big(x a,x b)
{
if(a>b)
return (a);
else
return (b);
}
int main()
{
cout<<big(4,5);
cout<<big(5.6,6.6);
getch();
}
