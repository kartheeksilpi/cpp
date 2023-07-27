/*Given an array arr[] of size N. The task is to find the first repeating element in the array of integers,
 i.e., an element that occurs more than once and whose index of first occurrence is smallest.

 Input:

7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3 whose first Occurring index is 3.*/

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
int minindx=INT_MAX;
int N=100;  // take the largest value
int idx[N];
for(int i=0;i<N;i++){
    idx[i]=-1;
}
for(int i=0;i<n;i++){
    if(idx[a[i]]==-1){
        idx[a[i]]=i;
    }
    else{
        minindx=min(minindx,idx[a[i]]);
    }
}
if(minindx==INT_MAX){
    cout<<"no repeating element"<<endl;
}
else{
    cout<<minindx+1<<endl;
}
return 0;
}