#include<iostream>
using namespace std;
int main(){
    int a;                             // storing in heap
    cout<<"enter a numbers"<<endl;
    cin>>a;
    int *p=new int();                  // allocating memory in heap
    *p=5;
    cout<<"p storing in the heap of address"<<endl;
    cout<<p<<endl;
    delete(p);                         // deallocating the memory of varaiable in heap
    cout<<"enter 4 numbers"<<endl;
    p=new int[4];                      // allocating memory of array size 4 in heap
    for(int i=0;i<4;i++){
        cin>>p[i];
    }
    cout<<"p of index zero is storing in the heap of address"<<endl;
    cout<<p<<endl;
    delete[]p;                        // deallocating the memory of array in stack
    p=NULL;                           // destroy the memory in heap
    return 0;
}