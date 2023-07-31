#include<iostream>
using namespace std;
void rev(string s){
    if(s.size()==0)return;
    rev(s.substr(1));
    cout<<s[0];
}
int main(){
    string s="kartheek"; 
    rev(s);
    
return 0;
}