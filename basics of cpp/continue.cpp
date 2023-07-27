// pradeep like travel.his gf allows only odd day to travel.print all the possible ways he can travel

#include <iostream>
using namespace std;
int main(){
    int day;
    for(day=1;day<=31;day++){
        if(day%2==0){
        continue;}
        cout<<day<<endl;
    }

return 0;
}