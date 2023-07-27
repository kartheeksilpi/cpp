/*Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is V. A day is record breaking if it satisfies both of the following conditions:

1)The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.

2)Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.

->Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
int n,mx=INT_MIN,ans=0;
cout<<"enter the no of elements = "<<endl;
cin>>n;
int a[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
a[n]=-1;
if(n == 1){
    cout<<"1";
    return 0; // comes out of the main funtion and code stops
}
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
            //here we should not take mx=a[i]; because some times it doesn't go to if condition but we have to update the max
        }
        mx=max(mx,a[i]);
    }
    cout<<ans<<endl;
    return 0;
}