//right half pyramid pattern

#include <iostream>
using namespace std;
int main(){
    int n,row,col,i,j;
    cout<<"enter the n value = ";
    cin>>n;
    for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
        cout<<"*";
      }
      cout<<endl;
    }

return 0;
}