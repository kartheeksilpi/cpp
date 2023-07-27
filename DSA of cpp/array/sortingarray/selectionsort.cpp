#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int a[n],b;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                b=a[j];
                a[j]=a[i];
                a[i]=b;
            }
        }
    }
    cout<<"the sorted elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
return 0;
}