// turn lowercase char to upper cae and uppercase char to lower case

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s1;
    cout<<"enter str"<<endl;
    cin>>s1;
    for(int i=0;i<s1.size();i++){
        if(s1[i]>='a' && s1[i]<='z'){
            s1[i]-=32;
        }
        else {                          //if(s1[i]>='A' && s1[i]<='Z'){
               s1[i]+=32;                                // s1[i]+=32;}
        }
    }
    cout<<s1<<endl;
    return 0;
}