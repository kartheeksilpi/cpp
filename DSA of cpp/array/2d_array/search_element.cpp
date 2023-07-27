#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the rows and columns"<<endl;
    cin>>n>>m;
    cout<<"enter the elements"<<endl;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int key;
    cout<<"Enter element to be searched"<<endl;
    cin>>key;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==key){
                count++;
                cout<<i+1<<" "<<j+1;
                break;
            }
        }
    }
    if(count==0){
        cout<<"element not found in matrix ";
    }
    return 0;
    
}
