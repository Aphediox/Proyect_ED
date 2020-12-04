#ifndef NODO_H
#define NOOF_H
#include "alumno.h"
class NODO{
    private:
    alumno a;
    NODO *sig;

    public:
    void setAlumno(alumno b){this->a = b;}
    void setNodo(NODO *nex){this->sig = nex;}

    alumno getAlum(){return a;}
    NODO* getNodo(){return sig;}


};

#endif