#include <iostream>
#include "matriz.h"
using namespace std;

void MatrizDemo(){
    int **pMat=nullptr;
    int fil=2,col=3;

    crearMatriz   (pMat,fil,col);
    ingresaMatriz (pMat,fil,col);
    imprimirMatriz(pMat,fil,col);
    borrarMatriz  (pMat ,fil);
}

void crearMatriz(int **&pMat,int fil, int col){
    pMat=new int* [fil];
    for(auto i=0;i<fil;++i){
        pMat[i]=new int [col];
    }
}

void ingresaMatriz(int **pMat, int fil, int col){
    for(auto i=0 ; i < fil ; ++i){
        for(auto j=0; j < col ; ++j){
            cout << "Ingresar pMat[" << i << "][" << j << "]=";
            cin>>pMat[i][j];
            //*(*(pMat+i)+j)
            //*(pMat[i]+j)
            //i[pMat][j]
        }
    }
}

void imprimirMatriz(int **pMat, int fil, int col){
    cout << "i =" << fil << ", j=" << col << endl;
    for(auto i=0 ; i < fil ; ++i){
        for(auto j=0 ; j < col ; ++j)
            cout << pMat[i][j] << "\t";
        cout << endl;
    }
}

void borrarMatriz(int **&pMat, int col){
    for(auto i=0; i<col; ++i)
            delete [] pMat[i];
    delete [] pMat;
    pMat=nullptr;
}