// write a program to print only edges hallow rectangle pattern * by taking rows and columns as input.

#include <iostream>
using namespace std;
int main(){
int rows,cols,i,j;
cout<<"enter the rows and columns"<<endl;
cin>>rows>>cols;
for ( i = 1; i <= rows; i++){
   for ( j = 1; j <= cols; j++){
    if((i==1 && j==1) || (i==rows && j==cols) || (i==rows && j==1) || (i==1 && j==cols)){ 
    cout<<"*";}
       
    else{
        cout<<" ";}
   }
    cout<<endl;
   
}


return 0;
}