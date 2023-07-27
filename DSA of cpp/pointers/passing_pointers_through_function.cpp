// passing value to function --  call by value

/*#include <iostream>
using namespace std;
int swaps(int a, int b){   // passing arg as value
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int a=10,b=5;
    swaps(a,b);
    return 0;
}*/

//passing address to function -- call by reference using address (call by reference without pointers)

/*#include <iostream>
using namespace std;
int swaps(int &a, int &b){     // passing arg as address
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10,b=5;
    swaps(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}*/

//passing address to function -- call by reference using pointers (call by reference without address)

#include <iostream>
using namespace std;
int swaps(int *a, int *b){     // passing arg as pointers
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10,b=5;
    int *p=&a;
    int *q=&b;
    swaps(p,q);  // here we can use swaps(&a,&b)  -- without using pointers in main( )
    cout<<a<<" "<<b<<endl;
    return 0;
}



