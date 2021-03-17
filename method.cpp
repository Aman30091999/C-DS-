#include<iostream>
#include<conio.h>
class A
{
public:
void f1(){}
void f2(){}};
class B:public A
{
public:
void f1(){}
void f2(){}};
int main()
{
B o;
o.f1();
o.f2();
getch();
}
