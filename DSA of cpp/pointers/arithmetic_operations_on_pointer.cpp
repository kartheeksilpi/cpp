//++,--,+,- are the arithmetic 
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl; // address of a
    ptr++;
    cout<<ptr<<endl;  // next address (address of a + 4 )
    return 0;
}