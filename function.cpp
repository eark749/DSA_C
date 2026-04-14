#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double base, int exponent) {
    double result = 1;
    for (int i=0;i < exponent; i++) {
        result *= base;
    }
    return result;
}

void print_stuff(double base, int expo) {

    double tpower = power(base, expo);
    //cout << pow(base,expo);
    //double power = pow(base,expo);
    cout<<"the power of base: "<< base<<" and exponent: "<<expo<<" is: " << tpower<<".\n";
}

int main() {
    double base;
    int expo;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>expo;
    print_stuff(base, expo);
}


