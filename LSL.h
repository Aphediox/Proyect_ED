#ifndef LSL_H
#define LSL_H
#include "Nodo.h"
class LSL{
    private: 
    NODO *ptr_list;
    public:
    void inicializa(){ptr_list = nullptr;}
    bool vacia(){return ptr_list == nullptr;}
    void agregar(alumno x);
    void pritn();
};



#endif