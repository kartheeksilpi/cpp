//brutefore approach
#include<bits/stdc++.h>
using namespace std;
bool pairsum(int n,int a[],int k){
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                cout<<i+1<<" "<<j+1<<endl;
                return 1;
            }
        }
        
    }
    cout<<"not found"<<endl;
    return 0;
}
int main(){
int n,k;
cout<<"enter the no of elements = "<<endl;
cin>>n;
int a[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<"enter the sum"<<endl;
    cin>>k;
    int sol=pairsum(n,a,k);
    cout<<sol<<endl;
    return 0;
    }

// dont know giving wrong output
/*#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cout<<"enter the no of elements = "<<endl;
cin>>n;
int a[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<"enter the sum"<<endl;
    cin>>k;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;i<n;i++){
            if(a[i]+a[j]==k){
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
    }*/