
#ifndef PERSONA_H
#define PERSONA_H
#include "nombre.h"

class persona: public nombre{
    private:
    int edad;
    std::string sexo;
    public:
    persona(int edad=0, std::string sexo = "Sin sexo"):edad(edad), sexo(sexo){};
    void set(std::string, std::string, std::string, int, std::string);
    void print();
};

#endif