//print all the primes within the given range and print its sum

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,i,j,c=0;
//     cout<<"enter the range of numbers (x,y) = "<<endl;
//     cin>>a>>b;
//         for(i=a; i<=b ;i++){
//             for(j=2; j<i ;j++){
//                 if(i%j==0)
//                 break;
//              }
//              if(j==i){
//              cout<<i<<endl;
//               c+=i;
//              }
             
//          }
//           cout<<"the sum of the prime between the range "<<a<<" and "<<b<<" is "<<c<<endl;

//   return 0;
// }
#include <iostream>
using namespace std;
int main(){
int a,b,i,j,c=0;
cout<<"enter the range"<<endl;
cin>>a>>b;
for(i=a;i<=b;i++){
    for(j=2;j<i;j++){
        if(i%j==0){
            break;
        }
    }
        if(j==i){
            cout<<i<<endl;
            c=c+i;        }
    }
    cout<<"sum of the primes "<<c<<endl;

return 0;
}