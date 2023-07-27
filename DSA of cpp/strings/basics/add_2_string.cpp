// append()
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    s1.append(s2);     // adding s2 to s1
    cout<<s1<<endl;    /* cout s1+s2 */
    return 0;
}