#include <iostream>
using namespace std;

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        cout << "0";
    } 
    else if (decimal > 0) {
        decimalToBinary(decimal / 2);
        cout << decimal % 2;
    }
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary representation: ";
        decimalToBinary(decimal);

    cout << endl;
    return 0;
}
