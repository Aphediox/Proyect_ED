#include "LSL.h"
using namespace std;
void LSL::agregar(alumno x){
    NODO *aux = new NODO;
    aux->setAlumno(x);
    if(vacia()){
        aux->setNodo(nullptr);
        ptr_list = aux;
        return;
    }
    NODO *p = ptr_list, *q;
     while (p!=nullptr and aux->getAlum().getCod() > p->getAlum().getCod())
     {
         q = p;
         p = p->getNodo();
     }
     if(p==ptr_list){
         aux->setNodo(ptr_list);
         ptr_list = aux;
         return; 
     }
     if(p == nullptr){
         q->setNodo(aux);
         aux->setNodo(nullptr);
         return;
     }else{
         q->setNodo(aux);
         aux->setNodo(p);
     }
     
}
void LSL::pritn(){
    for(NODO *p = ptr_list; p!=nullptr; p = p->getNodo()){
        p->getAlum().print();
    }
    
}