#include<bits/stdc++.h>
using namespace std;
int matmul( int n1,int m1,int n2,int m2,int a[][100],int b[][100],int c[][100]){
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            int sum=0;
            for(int k=0;k<m1;k++){    //or  for(int k=0;k<n2;k++)
                sum+=a[i][k]*b[k][j]; 
            }
            c[i][j]=sum;
        }
    }
    return 0;
}
int main(){
    int n1,m1,n2,m2,sol;
    cout<<"enter the rows and cols of 1st mat"<<endl;
    cin>>n1>>m1;
    cout<<"enter the rows and cols of 2nd mat"<<endl;
    cin>>n2>>m2;
    if(m1==n2){
    int a[n1][100];
    cout<<"enter the elements of 1st mat"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>a[i][j];
        }
    }
    int b[n2][100];
    cout<<"enter the elements of 2nd mat"<<endl;
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>b[i][j];
        }
    }
    int c[n1][100];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            c[i][j]=0;
        }
    }
    matmul(n1,m1,n2,m2,a,b,c);
    cout<<"the solution mat is"<<endl;
     for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"multiplicaion not possible"<<endl;
    }
    return 0;
}