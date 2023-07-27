#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    cout<<*arr<<endl;     // *arr returns the a[0] and arr returns the address of the a[0]
    int* ptr=arr;         // ptr stores the address of the a[0]

    cout<<"printing the arrays using general pointers"<<endl;
    for(int i=0;i<3;i++){ //printing the arrays using pointers
        cout<<*ptr<<endl;
        ptr++;
    }
   /*for(int i=0;i<3;i++){  // wrong implementaion of printing arrays using pointer array
        cout<<*arr<<endl;
        arr++;   
    }*/ 

    cout<<"printing the arrays using array pointers"<<endl;
    for(int i=0;i<3;i++){  // implementaion of printing arrays using pointer array
        cout<<*arr+i<<endl; // pointer array is constant
    }
    
    return 0;
}