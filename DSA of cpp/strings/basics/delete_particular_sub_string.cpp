//erase()

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="abcdef";
    s1.erase(4,2);        // 4 - index  ,  2 - no of char
    cout<<s1<<endl;
    return 0;
}