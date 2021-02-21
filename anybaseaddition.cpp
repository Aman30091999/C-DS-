#include<iostream>
using namespace std;
int getsum(int b,int n1,int n2){
int ans=0,pow=1;
int carry=0;
while(n2!=0||n1!=0||carry!=0){
    int ld2=n2%10;
    int ld1=n1%10;
    n2/=10;
    n1/=10;
    int sum=ld2+carry+ld1;
   int q=sum/b;
   int r=sum%b;
   ans+=(r*pow);
   carry=q;
   pow*=10;
}
return ans;
}
int main(){
int b,n1,n2;
cin>>b>>n1>>n2;
cout<<getsum(b,n1,n2)<<endl;
}
