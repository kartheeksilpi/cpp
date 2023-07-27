#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of letters"<<endl;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cout<<"enter the sentence"<<endl;
    cin.getline(a,n);
    cin.ignore();
    int curlen=0,maxlen=0;
    int maxst=0,st=0;
    int i=0;
    while(1){
        if(a[i]=='\0' || a[i]==' '){
            if(curlen>maxlen){
                maxlen=curlen;
                maxst=st;
            }
            curlen=0;
            st=i+1;
        }
        else{
            curlen++;
        }
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<"the length of the largest word is "<<endl<<maxlen<<endl;
    cout<<"the largest word is "<<endl;
     for(int i =0;i<maxlen;i++){
        cout<<a[maxst+i];
    }

    return 0;
}