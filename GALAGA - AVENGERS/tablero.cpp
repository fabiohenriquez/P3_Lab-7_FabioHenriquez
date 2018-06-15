#include "tablero.h"
#include <fstream>
#include <iostream>

using std::cout;
using std::endl;
using std::ifstream;


void tablero::freeMatrix(){
    if(matrix==NULL){
        for(size_t i = 0; i < size; i++){
            delete[] matrix[i];
          
        }        
         delete[] matrix;
          matrix = 0;
            size = 0;
    }
}

char** tablero::createMatrix(){
    freeMatrix();
    char**mat = new char*[20];
    for(int i = 0; i < size; i++){
        mat[i] = new char[20];
    }  
    return mat;
} 

void tablero::imprimirTablero(){
    for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
}

tablero::~tablero(){
    freeMatrix();
}