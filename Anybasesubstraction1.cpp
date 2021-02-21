#include<iostream>
using namespace std;
int getdiff(int b,int n1,int n2){
int ans=0,pow=1;
int borrow=0;
while(n2!=0){
    int ld2=n2%10;
    int ld1=n1%10;
    n2/=10;
    n1/=10;
    int diff=(ld2-borrow)-ld1;
    if(diff>=0){
       borrow=0;}
    else{
        diff += b;
        borrow=1;
    }
     ans+=diff*pow;
    pow*=10;
}
return ans;
}
int main(){
int b,n1,n2;
cin>>b>>n1>>n2;
cout<<getdiff(b,n1,n2)<<endl;
}
