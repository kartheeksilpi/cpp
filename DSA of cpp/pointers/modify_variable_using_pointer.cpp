#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr=&a;
    cout<<a<<endl;
    *aptr=20;  //updates the value a=10 to 20
    cout<<a<<endl;
    return 0;
}