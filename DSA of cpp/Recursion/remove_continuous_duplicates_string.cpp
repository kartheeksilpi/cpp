#include <iostream>
using namespace std;
string remdup(string s){
    if (s.size()==0) return "";
        string temp = remdup(s.substr(1));
        if(s[0]==temp[0]){
            return temp;
        }
        else{
            return s[0]+temp;
        }
    
}
int main(){
    string s="aaaabbbbccccaaa";
    cout<<remdup(s)<<endl;
    return 0;

}