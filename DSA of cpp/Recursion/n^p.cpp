#include<iostream>
using namespace std;\
int pow(int n, int p){
    if(p==1)return n;  // base condition we can take p==0 and return 1
    int temp=pow(n,p-1);
    return n*temp;

}
int main(){
    int n=4,p=3;
    cout<<pow(n,p)<<endl;
    
return 0;
}