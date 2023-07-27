// U shape

#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the n value = ";
    cin>>n;
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n;j++){
            if(j==1 || j==n){
           cout<<"*";}
           else{
            cout<<" ";
           }
        }
        cout<<endl;        
    }
    for(i=1;i<=n;i++){
        if(i==1 || i==n){
            cout<<" ";
        }
        else{
        cout<<"*";}
    }
    return 0;
}