//given an array a[]of size n.output sum of each subarray of the given array.
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the no of elements = "<<endl;
cin>>n;
int a[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    int count=0;
    for(int j=i;j<n;j++){
        count+=a[j];
        cout<<count<<endl;
    }
}
return 0;
}