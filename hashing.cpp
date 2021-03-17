#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
for(int i=2;i<n;++i){
    cin>>a[i];}
    int q;
    cin>>q;
    while(q--){
    int x;
    cin>>x;
   int ct=0;
   for(int i=0;i<n;++i){
    if(a[i]==x){
        ct++;
    }
   }
cout<<ct<<endl;
}
//0(N)+ 0(Q*N)=0(N^2)=10^10
}
