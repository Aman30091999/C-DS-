#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile;
ofile.open("text.txt");
cout<<"hello";
ofile.close();
return 0;
}
