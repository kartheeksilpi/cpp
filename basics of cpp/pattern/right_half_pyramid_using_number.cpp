//   right_half_pyramid_using_number

#include <iostream>
using namespace std;
int main(){
int n,i,j;
cout<<"enter the n value = ";
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}

return 0;
}