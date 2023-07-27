#include <iostream>
using namespace std;
int linearsearch(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int n,k;
    cout<<"no of elements  = ";
    cin>>n;
    int a[n];
    cout<<"enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the key = ";
    cin>>k;
    cout<<"the number is present in "<<linearsearch(a,n,k)<<" position";
return 0;
}
/*#include <iostream>
using namespace std;
int main(){
    int n,k,b;
    cout<<"no of elements = ";
    cin>>n;
    int a[n];
    cout<<"enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the key = ";
    cin>>k;
    for(int i=0;i<n;i++){
        if(k==a[i]){
            cout<<"the key is present in "<<i+1<<" position"<<endl;
        }
        else{
            b=1;
        }
    }
     if(b==1){
            cout<<"error"<<endl;
        }
return 0;
}*/