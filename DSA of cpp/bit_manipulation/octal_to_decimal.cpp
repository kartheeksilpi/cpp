#include<iostream>
using namespace std;
int otod(int n){
   int ans=0;
   int x=1;
   while(n>0){
   int y=n%10;
    ans+=y*x;
    x*=8;
    n/=10;
   } 
   return ans;
}
int main(){
    int n;
    cout<<"enter the binary no"<<endl;
    cin>>n;
    cout<<otod(n)<<endl;
    return 0;
}