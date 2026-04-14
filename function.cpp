#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double,int);


int main() {
    int base, expo;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>expo;
    double tpower = power(base, expo);
    //cout << pow(base,expo);
    //double power = pow(base,expo);
    cout << tpower<<" this is the power \n";
}

double power(double base, int exponent) {
    return 0.0;
}
