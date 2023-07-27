//given an array a[]of size n.for every i from 0 to n-1 output max(a[0],a[1],.....,a[i]).
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m=INT_MIN;
cout<<"enter the no of elements = "<<endl;
cin>>n;
int a[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    m = max(m,a[i]);  
        cout<<m<<endl;
}
return 0;
}