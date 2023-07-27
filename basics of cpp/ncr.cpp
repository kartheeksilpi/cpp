#include <iostream>
using namespace std;
int fact(int a){
    int b=1;
    for(int i=1;i<=a;i++){
        b=b*i;
    }
    return b;
}
int main(){
    int n,r,value;
    cout<<"enter the values of n and r"<<endl;
    cin>>n>>r;
    value=fact(n)/(fact(n-r)*fact(r));
    cout<<value<<endl;

return 0;
}