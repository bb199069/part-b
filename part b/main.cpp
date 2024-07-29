//Branden Bowling
// CIS 1202
//  part b
//7/28/24.

#include <iostream>
#include<cmath>
using namespace std;

template <typename T>
T half(T value){
    return value/2;
}

template <>
int half<int>(int value) {
    return static_cast<int>(round(static_cast <double>(value))
}
