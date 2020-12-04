#ifndef LISTA_H
#define LISTA_H
#include "alumno.h"

class lista:public alumno{
    private:
        alumno grupo[40];
        int ultimo;
        int i;
    
    public:
    void inicializar(){ultimo=-1; i=ultimo+1;}
    bool vacia(){return ultimo==-1;}
    bool llena(){return ultimo==39;}
    void insertar(alumno, int);
    void agregar(alumno, int);
    void print1();
    void eliminar(int);
    int busca_lineal(int);
    int busca_b(int);
    void intercambio(int i, int j);
    void burbuja();
    void burbuja_mejorado();
    void shell();
    void insercion();
    void seleccion();
    void mezcla(int izq, int der);
    void quicksort(int izq, int der);
};

#endif