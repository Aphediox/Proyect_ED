#ifndef NOMBRE_H
#define NOMBRE_H
#include <iostream>

class nombre{
    private:
    std::string name;
    std::string a_m;
    std::string a_p;
    public:
    nombre(std::string name = "Sin nombre", std::string a_p = "Sin apellido ", std::string a_m = "Sin apellido"): name(name), a_m(a_m), a_p(a_p){};
    void set(std::string, std::string, std::string);
    void print();
};

#endif