// write a program to print a rectangle pattern * by taking rows and columns as input.

#include <iostream>
using namespace std;
int main(){
int rows,cols,i,j;
cout<<"enter the rows and columns"<<endl;
cin>>rows>>cols;
for ( i = 1; i <= rows; i++){
   for ( j = 1; j <= cols; j++){
    cout<<"*";
   }
   cout<<endl;
   
}


return 0;
}