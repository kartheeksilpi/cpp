#include<iostream>
using namespace std;
int sum(int n){
    if(n==1){   //base condition we ca take it as n=0
        return 1;
    }
    int temp=sum(n-1);
   return n+temp;

}
int main(){
    int n=3;
    cout<<sum(n);
    
return 0;
}