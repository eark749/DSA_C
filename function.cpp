#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() {
    int base, expo;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>expo;
    //cout << pow(base,expo);
    double power = pow(base,expo);
    cout << power<<" this is the power \n";
}