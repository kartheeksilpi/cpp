#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    cout<<*p<<endl; // 10
    int **q=&p;
    cout<<*q<<endl; // address of p
    cout<<**q<<endl; // 10  ( q --> p --> a=10)
    return 0;
}