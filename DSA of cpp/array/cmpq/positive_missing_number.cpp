#include <bits/stdc++.h>
using namespace std;
int max(int n,int a[]){
   sort(a,a+n);
   int max=a[n-1]; // last and the high value
   /* int max=INT_MIN;
    for (int i = 0;i<n;i++) {
        if(a[i]>max){
            max=a[i];
        }
    }*/
    return max;
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
int m=max(n,a);
bool idx[m];
for(int i=0;i<m;i++){
    idx[i]=0;
}
for(int i=0;i<n;i++){
    if(a[i]>=0){
        idx[a[i]]=1;
    }
}
    int ans=-1;
for(int i=1;i<m;i++){
    if(idx[i]==0){
         ans=i;
       break;
    }
} if(ans==-1)
    cout<<"no sol"<<endl;
    else
    cout<<ans<<endl;
return 0;
}