#include "alumno.h"

void alumno::set(std::string name, std::string a_p, std::string a_m, int edad, std::string sexo, int codigo, int promedio){
    persona::set(name, a_p, a_m, edad, sexo);
    this -> codigo = codigo;
    this -> promedio = promedio;
}

void alumno::print(){
    persona::print();
    std::cout << codigo; std::cout << "   Promedio:  " <<  promedio << std::endl;

}
int alumno::getCod(){
    return codigo;
}