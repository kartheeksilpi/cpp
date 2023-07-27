// linear search with function


#include <iostream>
using namespace std;

int linearsearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==a[i]){
            return ++i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int a[n],key,b;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the key to search"<<endl;
    cin>>key;
    b=linearsearch(a,n,key);
    if(b==-1){
        cout<<"not available"<<endl;
    }
    else{
        cout<<"the element is present in "<<b<<" position"<<endl;
    }
    
return 0;
}







//without function


/* #include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int a[n],key,flag=0,b;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the key to search"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==a[i]){
            b=i+1;
            flag++;
        }
    }
    if(flag==0){
        cout<<"not available"<<endl;
    }
    else{
        cout<<"the key is in "<<b<< " position"<<endl;
    }

return 0;
}*/