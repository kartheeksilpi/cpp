// a=1 b=2 ----e=5 anyother=none

#include <iostream>
using namespace std;
int main(){
    char button;
    cin>>button;
  /*  if (button=='a'|| button=='A')
    {
        cout<<"1";
    }
    else if (button=='b')
    {
        cout<<"2";
    }
    else if (button=='c')
    {
        cout<<"3";
    }
    else if (button=='d')
    {
        cout<<"4";
    }
    
    else if (button=='e')
    {
        cout<<"5";
    }
    else
    {
        cout<<"NONE";
    }*/
    switch (button)
    {
    case 'a':
        cout<<"1";
        break;
    case 'b':
        cout<<"2";
        break;
    case 'c':
        cout<<"3";
        break;
    
    default:
        cout<<"none";
        break;
    }

}