//  palindromic_pattern

#include <iostream>
using namespace std;
int main(){
    int n,i,j,k,v;
    cout<<"enter the n value = ";
    cin>>n;
      for(i=1;i<=n;i++){
        k=i;
        
        for(j=1;j<=n-i;j++){
            cout<<" ";}
        for(;j<=n;j++){
            cout<<k--;
            }
            k=2;
        for(;j<=n+i-1;j++){
            cout<<k;
            k++;}
        cout<<endl;
    }             

return 0;
}

/*      for(i=1;i<=n;i++){
        k=i;
        v=2;
        for(j=1;j<=n-i;j++){
            cout<<" ";
            cout<<" ";}
        for(j=1;j<=i;j++){
            cout<<" "<<k;   // cout<<" "<<k--;  
            k--;
            }
        for(j=1;j<=i-1;j++){
            cout<<" "<<v;
            v++;

        }
        cout<<endl;
    }                           */