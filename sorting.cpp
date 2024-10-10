#include <iostream>
#include <algorithm>
#include <array> // para el uso de array<tipo, tamaño>
#include <functional>
#include <iostream>
#include <string_view>

#include "sorting.h"
using namespace std;

void print(int v[], int n)
{
    for (int i = 0 ; i < n ; ++i)
        cout << v[i] << ' ';
    // cout << ": " << rem << '\n';
}

void Sorting(){
    cout << "Sorting Demo\n";
    int v[5] = {4, 2, 8, 1, 6};
    sort(v, v+5);
    print(v, 5);

    // array<float, 10> sf{5.3, 7.2, 4.8, 2.1, 8.7, 6.2, 1.5, 9.9, 0.7, 3.14};
    // array<int  , 10>  s{5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
 
    // auto print = [&s](string_view const rem)
    // {
    //     for (auto a : s)
    //         cout << a << ' ';
    //     cout << ": " << rem << '\n';
    // };
 
    // sort(s.begin(), s.end());
    // print("sorted with the default operator<");
 
    // sort(s.begin(), s.end(), greater<int>());
    // print("sorted with the standard library compare function object");
 
    // struct
    // {
    //     bool operator()(int a, int b) const { return a < b; }
    // }
    // customLess;
 
    // sort(s.begin(), s.end(), customLess);
    // print("sorted with a custom function object");
 
    // sort(s.begin(), s.end(), [](int a, int b)
    //                               {
    //                                   return a > b;
    //                               });
    // print("sorted with a lambda expression");
}