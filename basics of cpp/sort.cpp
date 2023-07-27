#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={1,5,2,8,7};
   sort(a,a+5,greater<int>());
   for(int i=0;i<5;i++){
   cout<<a[i];}
   return 0;
    }
//swap(),sort(),*max_element(),*min_element(),accumulate(),reverse();