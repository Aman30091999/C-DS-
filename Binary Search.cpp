#include<iostream>
using namespace std;
int main(){
int n,i;
cin>>n;
int* arr=new int[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}
int data;
cin>>data;
int left=0;
int right=n-1;
while(left<=right){
    int mid=(left+right)/2;
    if(arr[mid]==data){
        cout<<i<<endl;
    }
    else if(arr[mid]<data){
        left=mid+1;
    }
    else{
        right=mid-1;
    }
}
cout<<"element does not exist"<<endl;
}
