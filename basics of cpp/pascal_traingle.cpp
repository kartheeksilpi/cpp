#include <iostream>
using namespace std;
int fac(int a){
    int b=1;
    for(int i=1;i<=a;i++){
        b=b*i;
    }
    return b;
}
int ncr(int n,int r){
    int value;
    value=fac(n)/(fac(n-r)*fac(r));
    return value;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
return 0;
}