//#include <iostream>
//#include <climits>
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
int maxno=INT_MIN;
int minno=INT_MAX;
for(int i=0;i<n;i++){
    minno=min(minno,a[i]);
    maxno=max(maxno,a[i]);
}
cout<<"the minimum number is "<<minno<<endl;
cout<<"the maximum number is "<<maxno<<endl;

return 0;
}


/*

#include <iostream>
#include <climits>
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
int maxno=a[0];
int minno=a[0];
for(int i=0;i<n;i++){
    if(maxno<a[i]){
        maxno=a[i];
    }
    if(minno>a[i]){
        minno=a[i];
    }
}
cout<<"the minimum number is "<<minno<<endl;
cout<<"the maximum number is "<<maxno<<endl;

return 0;
}

*/


