#include <bits/stdc++.h>
using namespace std;
int kadanes(int n,int a[]){
    int currsum=0;
    int maxsum=INT_MIN;
    for (int i=0; i<n;i++) {
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}
int main(){
int n;
cout<<"enter the no of elements = "<<endl;
cin>>n;
int a[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
    int asum=0;
    int wrap,nonwrap;
    nonwrap=kadanes(n,a);
    for(int i=0;i<n;i++){
        asum+=a[i];
        a[i]=-a[i];
    }
    wrap=asum+kadanes(n,a);
    cout<<max(nonwrap,wrap)<<endl;
}