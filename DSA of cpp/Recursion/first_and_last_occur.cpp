#include<iostream>                     //strictly increasing
using namespace std;
int fir(int a[],int n,int i,int k){
    if(i==n)return -1;
    if(a[i]==k){
        return i;
    }
    return fir(a,n,i+1,k);
}
int las(int a[],int n,int i,int k){
    if(i==n)return -1;
    int temp=las(a,n,i+1,k);
    if(temp!=-1){
        return temp;
    }
    if(a[i]==k){
        return i;
    }
    return -1;
}
int main(){
    int n=11,key=3;
    int a[n]={1,2,3,3,3,2,4,2,3,2,1};
   int f= fir(a,n,0,key);
   int l= las(a,n,0,key);
   cout<<f<<","<<l<<endl;
return 0;
}