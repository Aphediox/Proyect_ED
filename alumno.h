#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"

class alumno:public persona{
    private:
    int codigo;
    int promedio;
    public:
    alumno(int codigo = 0, int promedio = 0):codigo(codigo), promedio(promedio){}
    void set(std::string, std::string, std::string, int, std::string, int, int);
    void print();
    int getCod();


};

#endif