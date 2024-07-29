//Branden Bowling
// CIS 1202
// part b
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
    return static_cast<int>(round(static_cast <double>(value)/2));
}
int main(){
    cout<< "half(7.0) =" << half(7.0)<<endl;
    cout<< "half(5.0f) = " << half(5.0f) <<endl;
    cout<< "half(3) = " << half (3)<< endl;
    cout<<"half(8) =" <<half(8)<<endl;
    return 0;
}
