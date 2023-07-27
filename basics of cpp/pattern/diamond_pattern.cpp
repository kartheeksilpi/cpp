//  diamond_pattern

#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the value of n = ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";}
        int star=2*i-1;
        for(j=1;j<=star;j++){
            cout<<"*";}
        for(j=1;j<=n-i;j++){
            cout<<" ";}
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            cout<<" ";}
        int star=2*i-1;
        for(j=1;j<=star;j++){
            cout<<"*";}
        for(j=1;j<=n-i;j++){
            cout<<" ";}
        cout<<endl;
    }
return 0;
}