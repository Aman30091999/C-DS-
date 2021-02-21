#include<iostream>
using namespace std;
int gpwsd(int b,int n1,int n2){
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
int getproduct(int b,int n1,int n2){
int ans=0,pow=1;
while(n2!=0){
    int l2=n2 %10;
    n2/=10;
    int pwsd=gpwsd(b,n1,n2);
    ans=getsum(b,ans,pwsd*pow);
    pow*=10;
}

}
int main(){
int b,n1,n2;
cin>>b>>n1>>n2;
cout<<getproduct(b,n1,n2)<<endl;
}
