#ifndef TABLERO_H
#define TABLERO_H
#include <string>

using std::string;
class tablero{
    
       
    public:
        char** matrix;
        int size;
        char** createMatrix();
        void freeMatrix();
        void imprimirTablero();
        ~tablero();

};

#endif