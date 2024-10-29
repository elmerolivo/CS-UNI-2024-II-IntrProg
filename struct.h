#ifndef __STRUCT_H__
#define __STRUCT_H__

#include <string>

// #include <cstddef> // size_t
using namespace std;

struct ALU{
    int id;
    string name;
};

void PrintAlu(ALU &alu);
void PrintAlu(ALU *pAlu);

void DemoStruct();

#endif