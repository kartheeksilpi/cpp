#include <iostream>
using namespace std;
string rev(string s,int i){
    if (i == s.size()) return "";
    else{
        string temp = rev(s,(i+1));
        return temp + s[i]; 
    }
}
int main(){
    string s="kartheek";
    cout<<rev(s,0)<<endl; // Output: kehtrekark

}