#include<bits/stdc++.h>
const int N =1e7+10;//limitation of Array
int h[N];//HAsh  array
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
for(int i=2;i<n;++i){
    cin>>a[i];
    h[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
    int x;
    cin>>x;


cout<<h[x]<<endl;
}
//0(N)+ 0(Q*N)=0(N^2)=10^10
}
