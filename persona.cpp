#include "persona.h"
void persona::set(std::string name, std::string a_p, std::string a_m, int edad, std::string sexo){
    nombre::set(name, a_p, a_m);
    this -> edad = edad;
    this -> sexo = sexo;
}

void persona::print(){
    nombre::print();
    std:: cout<< edad << std::endl;
    std:: cout<< sexo << std::endl;
}