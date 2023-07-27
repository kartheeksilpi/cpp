#include <bits/stdc++.h>
using namespace std;
int main(){
int n,s;
cout<<"enter the no of elements = "<<endl;
cin>>n;
int a[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
    }
cout<<"enter the sum"<<endl;
    cin>>s;
    int i=0,j=0;        // for start and end iteration
    int st=-1,en=-1;   // for storing final start and end postion of subarray
    int sum=0;          // to store iteration total sum
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j<<endl; // after while loop ends j is already incremented so no need for j+1
        return 0; 
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if (sum == s){
            st=i+1;
            en=j+1;
        }
    j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}