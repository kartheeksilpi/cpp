//  K shape pattern

#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the n value = ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i==j){
           cout<<"*";}
        }
        int space=(n-i);
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            if(i==j){
           cout<<"*";}
        }
        int space=(n-i);
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

return 0;
}