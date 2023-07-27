//optimization: linear o(n) -- it should be sorted first

#include<bits/stdc++.h>
using namespace std;
bool pairsum(int n,int a[],int k){
    int low=0;
    int high=n-1;
    while (low<high){
        if(a[low]+a[high]<k){
            low++;
        }
        else if(a[low]+a[high]==k){
            cout<<low+1<<" "<<high+1<<endl;
            return 1;
            }
        else{
            high--;
        }
    }
    return 0;
}
int main(){
int n,k;
cout<<"enter the no of elements = "<<endl;
cin>>n;
int a[n],b[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<"enter the sum"<<endl;
    cin>>k;
    cout<<pairsum(n,b,k);
    return 0;
    
}