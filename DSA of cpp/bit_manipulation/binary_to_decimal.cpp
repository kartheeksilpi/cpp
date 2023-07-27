#include<iostream>
using namespace std;
int btod(int n){
   int ans=0;
   int x=1;
   while(n>0){
   int y=n%10;
    ans+=y*x;
    x*=2;
    n/=10;
   } 
   return ans;
}
int main(){
    int n;
    cout<<"enter the binary no"<<endl;
    cin>>n;
    cout<<btod(n)<<endl;
    return 0;
}