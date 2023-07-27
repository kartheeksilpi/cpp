// easy approach ---  transform()

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter str"<<endl;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);  // use to lower for lowercase
    cout<<s<<endl;
    return 0;
}                                                                                                                   