#include<iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}

int main(){
    int a,b;                             // storing in stack
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    int sum=add(a,b);
    cout<<"the sum is "<<sum<<endl;
    return 0;
}