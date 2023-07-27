//add sum of the numbers till n
#include <iostream>
using namespace std;
int main(){
int n,i,sum=0;
cin>>n;
    for(i=0;i<=n;i++){
        sum+=i;//sum=sum+i;
    }
        cout<<sum<<endl;
return 0;
}