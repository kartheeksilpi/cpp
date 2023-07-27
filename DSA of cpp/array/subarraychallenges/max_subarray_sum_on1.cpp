//kadane's algorithm
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
int currsum=0,maxsum=INT_MIN;
for(int i=0;i<n;i++){
    currsum+=a[i];
    if(currsum<0){
        currsum=0;
    }
    maxsum=max(maxsum,currsum);
}
    cout<<maxsum<<endl;
return 0;
}