#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of letters"<<endl;
    cin>>n;
    char a[n+1];
    cout<<"enter the letters"<<endl;
    cin>>a;
    bool b=0;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            b=1;
            break;
        }
    }
    if(b){
        cout<<"not a polindrome"<<endl;
    }
    else{
        cout<<"it is a polindrome"<<endl;        
    }
    return 0;
}