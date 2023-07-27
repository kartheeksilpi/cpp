// search an element in matrix if all the rows and col are sorted

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,key;
    cout<<"enter the rows and columns"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"enter the sorted matrix elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the key to search"<<endl;
    cin>>key;
    bool b=0;
    int r=0,c=m-1;
    int ra,ca;   // to store the pos of key
    while(r<n && c>=0){
    if(a[r][c]==key){
        b=1;
        ra=r+1;
        ca=c+1;
        break;
    }
    else if(a[r][c]<key){
        r++;
    }

    else{
        c--;
    }
    }
    if(b){   // while b is true
        cout<<"the key is in "<<ra<<" "<<ca<<endl;
    }
    else{
          cout<<"key not found"<<endl;
    }
}