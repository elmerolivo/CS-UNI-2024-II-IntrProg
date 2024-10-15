#include <iostream>
#include <algorithm>
#include <array>
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
}

