#include "LSL.h"

int suma(int n){
    std::cout << n << std::endl;
    if (n==1)
    {
        return 1;
    }
    return n + suma(n-1);
}
int fibo(int n){
    if(n == 0 or n == 1)
        return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    LSL l1;
    l1.inicializa();

    alumno x;
    x.set("Salvador", "Torres", "Carrillo", 20, "M", 2153, 100);
    l1.agregar(x);

    x.set("Jorge", "Torres", "Carrillo", 20, "M", 2152, 100);
    l1.agregar(x);
    
    x.set("YO", "Torres", "Carrillo", 20, "M", 2156, 100);
    l1.agregar(x);
    l1.pritn();
}
