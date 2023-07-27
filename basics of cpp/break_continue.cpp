//nithin like travel.his gf allows only odd day to travel.nithin has pocket money every time he go out he spends 300 in the pocketmoney.print the days he is going out. 

#include <iostream>
using namespace std;
int main(){
 int day,pocketmoney,count=0;
 cin>>pocketmoney;
    for(day=1;day<=31;day++){
        if(day%2==0){
        continue;}
        if(pocketmoney<300){
            break;
        }
      //  if(pocketmoney>=300)
        cout<<day<<endl;
        count=count+1;
        pocketmoney-=300;}
    cout<<"no of days = "<<count<<endl;


return 0;
}