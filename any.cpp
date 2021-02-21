#include<iostream>
using namespace std;
int decimaltoanybase(int n,int b){
int ans=0;
int pow=1;
while(n!=0){
    int r=n%b;
n/=b;
ans+=(r *pow);
pow*=10;
}
return ans;
}
int anybasetodecimal(int n,int b){
int ans=0;
int pow=1;
while(n!=0){
    int r=n%10;
n/=10;
ans+=r *pow;
pow*=b;
}
return ans;
}
int main(){
int n,b1,b2;
cin>>n>>b1>>b2;
int deci=anybasetodecimal(n,b1);
cout<<"decmal :"<<anybasetodecimal(n,b1)<<endl;
cout<<" Answer:"<<decimaltoanybase(deci,b2)<<endl;
}
