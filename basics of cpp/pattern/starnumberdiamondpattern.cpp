//  diamond_pattern

/*#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the value of n = ";
    cin>>n;
    for(i=1;i<=n;i++){
       int count=1;
        for(j=1;j<=n-i;j++){
            cout<<" ";}
        int star=2*i-1;
        for(j=1;j<=star;j++){
            if(i+j%2 !=0){
                cout<<count++;
            }
            else
            cout<<"*";}
      /*  for(j=1;j<=n-i;j++){
            cout<<" ";}*/
       // cout<<endl;
  /*  }
    for(i=n-1;i>=1;i--){
       int count=1;
        for(j=1;j<=n-i;j++){
            cout<<" ";}
        int star=2*i-1;
        for(j=1;j<=star;j++){
            if(i+j%2 !=0){
                cout<<count++;
            }
            else
            cout<<"*";}
      /*  for(j=1;j<=n-i;j++){
            cout<<" ";}*/
       // cout<<endl;
  /*  }
return 0;
}*/



#include <iostream>

using namespace std;

void printPattern(int n) {
        
    for (int i = 1; i <= n; i++) {
        for(int j=1;j<=n-i;j++){
            cout<<" ";}
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                cout << j;
            } else {
                cout << j << "*";
            }
        }
        cout << endl;  // Add a new line after each column
    }


    for (int i = n - 1; i >= 1; i--) {
        for(int j=1;j<=n-i;j++){
            cout<<" ";}
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                cout << j;
            } else {
                cout << j << "*";
            }
        }
        cout << endl;  // Add a new line after each column
    }
}

int main() {
    int num;
    cout << "Enter the number of rows: ";
    cin >> num;

    printPattern(num);

    return 0;
}
