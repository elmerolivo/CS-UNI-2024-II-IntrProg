#include <iostream>
#include "pointers.h"
using namespace std;

// Se envia copia de la variable. 
// Paso por valor de un int
void f1(int n){
    ++n;
}

void f2(int &n){
    ++n;
}

void f3(int *pi){
    ++*pi;
    pi = nullptr;
}

void f4(int *&rp){
    ++*rp;
    rp = nullptr;
}

void Pointers(){
    int x = 5, y = 10, &r = x;
    int *p = nullptr, *q = nullptr;
    int **pp = nullptr;

    p = &x;     q = &y;
    pp = &p;

    cout << "x  está en: " << &x << endl;
    cout << "y  está en: " << &y << endl;
    cout << "p  está en: " << &p << endl;
    cout << "q  está en: " << &q << endl;
    cout << "pp está en: " << &pp << endl;

    f1(x);  cout << "x=" << x << endl;
    f1(7);
    f1(r);  cout << "x=" << x << endl;

    x = 5;
    cout << "f2(int &n)\n";
    f2(x);      cout << "x=" << x << endl;
    f2(r);      cout << "x=" << x << endl;
    f2(*p);     cout << "x=" << x << endl;
    f2(**pp);   cout << "x=" << x << endl;
    f2(*&x);    cout << "x=" << x << endl;
    // f2(7);   error

    x = 5;
    cout << "f3(int *pi)\n";
    f3(&x);     cout << "x=" << x << endl;
    f3(p);      cout << "x=" << x << endl;
    f3(p);      cout << "x=" << x << endl;
    f3(&r);     cout << "x=" << x << endl;
    f3(*pp);    cout << "x=" << x << endl;
    // Error f3(nullptr);

    x = 5;
    cout << "f4(int *&pi)\n";
    // Error f4(&x);
    f4(p);      cout << "x=" << x << endl;
    p = &x;
    f4(*pp);    cout << "x=" << x << endl;
    cout << "p=" << p <<endl;
    f4(q);      cout << "y=" << y << endl;
                cout << "q=" << q << endl;
}

float Suma(float a, float b){
    return a+b;
}

float Resta(float a, float b){
    return a-b;
}

float Multiplicacion(float a, float b){
    return a*b;
}

float Division(float a, float b){
    return a/b;
}

void DemoSingleFunctionPointers(){
    float (*pff)(float, float) = &Suma;
    float a1 = 3.1, a2 = 5.2, rpta;

    rpta = (*pff)(a1, a2); // rpta = Suma(a1, a2);
    cout << "Suma de " << a1 << " y " << a2 << ": " << rpta << endl;
}



void DemoFunctionPointers(){
    DemoSingleFunctionPointers();
    
}