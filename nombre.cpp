#include "nombre.h"

void nombre::set(std::string name, std::string a_p, std::string a_m){
    this -> name = name;
    this -> a_p = a_p;
    this -> a_m = a_m; 
}

void nombre::print(){
    std::cout<< name + " " +  a_p + " " + a_m<<std::endl;
}