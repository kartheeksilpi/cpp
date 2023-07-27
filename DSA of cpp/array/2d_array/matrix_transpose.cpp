#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cout<<"enter row and col"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
           int temp;
           temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
