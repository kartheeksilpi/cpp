//brutefore approach
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
int maxsum=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=a[k];
            maxsum=max(maxsum,sum);
        }
    }
} 
cout<<maxsum<<endl;
    return 0;
}