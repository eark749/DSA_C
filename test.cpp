//
// Created by vansh on 4/14/2026.
//
#include <iostream>
int addition(int int1,int int2) {
   int total = int1+ int2;
   //std::cout<<total<<std::endl;
   return total;
}

int main() {
   std::cout<<"The sum is " << addition(2,3)<<std::endl;
}