#include<iostream>
using namespace std;
void rep(string s){
    if(s.size()==0)return;
    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.15";
        rep(s.substr(2));
    }
    else{
        cout<<s[0];
        rep(s.substr(1));
    }
}
int main(){
    string s="piipppippi";
    rep(s);
return 0;
}