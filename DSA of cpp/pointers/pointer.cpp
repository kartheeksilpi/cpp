#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr=&a;  //creates a pointer variable
    cout<<aptr;
    /*aptr=&a;    // stores the address of a in the pointer variable
    
    cout<<&a<<endl; // print the address of a
    cout<<aptr<<endl; //print the pointer value (address of a)
    cout<<*aptr<<endl; //print the value pointing to the variable ( 10 )*/
    return 0;

}