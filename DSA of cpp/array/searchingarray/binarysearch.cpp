#include <iostream>
using namespace std;
int binarysearch(int n,int a[],int key){
    int low=0;
    int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            return ++mid;
        }
        else if(key>a[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){ 
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int a[n],b,c,key;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    cout<<"the sorted elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"enter the key to search"<<endl;
    cin>>key;
    c=binarysearch(n,a,key);
    if(c==-1){
        cout<<"not available"<<endl;
    }
    else{
        cout<<"the element is present in "<<c<<" position"<<endl;
    }
return 0;
}