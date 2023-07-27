//check the number is prime or not
//check the number is prime or not
#include <iostream>
using namespace std;
int main(){
    int num,i;
cin>>num;
for(i=2;i<num;i++){
    if(num%i==0){
        cout<<"not prime"<<endl;
        break;}
    
    }
    if(i==num){
        cout<<"prime";}

return 0;
}