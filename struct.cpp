

#include <iostream>
#include "struct.h"
using namespace std;

void PrintAlu(ALU &alu){
    cout << "id:" << alu.id << " name:" << alu.name << endl;
}

void PrintAlu(ALU *pAlu){
    cout << "id:" << pAlu->id << " name:" << pAlu->name << endl;
}

void DemoStruct(){
    ALU a1, *pAlu1 = nullptr, 
            *pAlu2 = nullptr,
        va[10], *pVa = nullptr;

    a1.id = 25;
    a1.name = "Antonio";
    PrintAlu(a1);

    pAlu1 = &a1;
    pAlu1->id = 20;
    pAlu1->name = "Jose";
    PrintAlu(pAlu1);
}