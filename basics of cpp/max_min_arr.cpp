#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"total no of elements = ";
    cin>>n;
    int a[n];
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];}
    int max=a[0];
    int min=a[1];
    for(int i=0;i<n;i++){
    if(max<a[i]){
        max=a[i];}
    if(min>a[i]){
        min=a[i];}   
    }
    cout<<"the max element = "<<min<<"\n"<<"the min element = "<<max<<endl;
return 0;
}