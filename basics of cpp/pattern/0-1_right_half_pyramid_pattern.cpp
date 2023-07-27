// 0-1_right_half_pyramid_pattern

#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the value of n ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";}
            else{
                cout<<"0";}
            }
        cout<<endl;
            }
    return 0;
        }