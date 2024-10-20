#include <string>
#include "bits.h"
using namespace std;

void SwapBits(T &var1, T &var2, size_t pos){
    T bit = (1 << pos);
    if( (var1 & bit) != (var2 & bit) ){
        if( var1 & bit ){
            var1 &= ~bit;
            var2 |= bit;
        }
        else{
            var1 |= bit;
            var2 &= ~bit;
        }
    }
}

void PrintByBits(ostream &os, string msg, T &num){
    auto nbits = sizeof(T) << 3;
    os << msg;
    for(auto i = nbits ; i > 0 ; --i){
        T bit = 1 << (i-1);
        os << ((num&bit)? 1 : 0);
    }
    os <<endl;
}

void BitsDemo(){
    T var1 = 310, var2 = 193;
    cout << var1 << endl;
    PrintByBits(cout, "var1=", var1);
    PrintByBits(cout, "var2=", var2);
    SwapBits(var1, var2, 4);
    PrintByBits(cout, "var1=", var1);
    PrintByBits(cout, "var2=", var2);
}