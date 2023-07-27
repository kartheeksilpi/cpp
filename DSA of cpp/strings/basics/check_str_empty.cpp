// empty()  -- returns boolean value
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="abc";
    string s2="xyz";
    s1.clear();
    cout<<s1.empty()<<endl;
    cout<<s2.empty()<<endl;
    return 0;
}