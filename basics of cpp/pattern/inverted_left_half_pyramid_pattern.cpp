//  inverted_left_half_pyramid

#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the n value = ";
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=0;j<=n;j++){
            if(j<=n-i){
                cout<<" ";}
            else{
                cout<<"*";}
        }
        cout<<endl;
    }
return 0;
}