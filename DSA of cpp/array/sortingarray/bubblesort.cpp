#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=1;
    while(count<n){
        for(int i=0;i<n-count;i++){
            if(a[i]>a[i+1]){
           swap(a[i],a[i+1]);
        }
    }
    count++;
    }
    cout<<"the sorted elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
return 0;
}