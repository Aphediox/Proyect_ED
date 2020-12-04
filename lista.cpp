#include "lista.h"
void lista::insertar(alumno x, int pos){
   if (llena() or pos<0 or pos>ultimo+1)
   {
       return;
   }
   for (int i = ultimo+1; i > pos; i--)
   {
       grupo[i] = grupo[i-1];
   }
   grupo[pos]=x;
   ultimo++;
}

void lista::agregar(alumno x, int pos){
    if (llena() or pos < 0 or pos > ultimo +1)
    {
        return;
    }
    if (ultimo+1!=pos)
    {
        grupo[ultimo+1]=grupo[pos];
    }
    grupo[pos]=x;
    ultimo++;
    
}

void lista::print1(){
    for (int i = 0; i <= ultimo; i++)
    {
       grupo[i].print();
    }    
}

void lista::eliminar(int pos){
    if (vacia() or pos < 0 or pos > ultimo)
    {
        return;
    }
    for (int i = pos; i < ultimo; i++)
    {
        grupo[i] = grupo[i+1];
    }
    ultimo--;
        
}

int lista::busca_lineal(int cod){
    if(vacia())
    {
        return -1;
    }
    for (int i = 0; i <= ultimo; i++)
    {
       if (cod == grupo[i].getCod())
       {
           return i;
       }
    }
    return -1;
}

int lista::busca_b(int cod){
    int i= 0, j=ultimo, m;
    if (vacia())
    {
        return -1;
    }
    while (i<=j)
    {
        m=(i+j)/2;
        if (cod == grupo[m].getCod())
        {
            return m;
        }
        if (cod<grupo[m].getCod())
        {
            j=m-1;
        }
        else
        {
            i=m+1;
        }
    } 
     return -1;
}

void lista::burbuja(){
    for (int i = ultimo; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (grupo[j].getCod() > grupo[j+1].getCod() )
            {
                intercambio(j, j+1);
              
            }
            
        }
        
    }
    
}

void lista::intercambio(int i, int j){
        alumno aux;
        aux = grupo[i];
        grupo [i] = grupo[j];
        grupo[j] =  aux;
}

void lista::burbuja_mejorado(){
    int ban = 0;
    do
    {
    for (int i = ultimo; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (grupo[j].getCod() > grupo[j+1].getCod() )
            {
                intercambio(j, j+1);
                ban=1;
            }
            
        }
        ban = 0;   
    }
    } while (ban==1);
    
}

void lista::shell(){
    for (int distancia = .75*ultimo; distancia > 0; distancia*=0.75)
    {
        for (int i = 0; i <= (ultimo-distancia); i++)
        {
            if (grupo[i].getCod() > grupo[i + distancia].getCod())
            {
                intercambio(i, i+distancia);
            }   
        }   
    }   
}

void lista::insercion(){
    alumno aux;
    int j;
    for (int i = 1; i <= ultimo; i++){
        aux = grupo[i];
        for (j = i; j > 0 and aux.getCod()<grupo[j-1].getCod(); j--){
            grupo[j] = grupo[j-1];
        }
        if(i!=j){
            grupo[j] = aux;
        }
    }
}

void lista::seleccion(){
    for (int i = 0; i < ultimo; i++)
    {
        int menor = i;
        for (int j = i+1; j < ultimo; j++)
        {
            if (grupo[menor].getCod() > grupo[j].getCod())
            {
                menor = j;
            }
            if (i!=menor)
            {
                intercambio(i,menor);
            }
            
        }
        
    }
    
}
void lista::mezcla(int izq, int der){
    if(izq >= der )
        return;
    
    int m = (izq+der)/2;
    mezcla(izq, m);
    mezcla(m+1, der);

    alumno  temp[40];
    for(int i = izq; i <= der; i++)
        temp[i] = grupo[i];
    int i = izq, j = m + 1, x = izq;
    while (i <= m and j <= der){
        while(i <= m and temp[i].getCod() < temp[j].getCod()){
            grupo[x] = temp[i];
            x++;
            i++;
        }
        while(j <= der and temp[j].getCod() < temp[i].getCod()){
            grupo[x] = temp[j];
            x++;
            j++;
        }
    }
        while(i <= m){
            grupo[x] = temp[i];
            x++;
            i++;
        }
        while(j <= der){
            grupo[x] = temp[j];
            x++;
            j++;
        }
   
}

void lista::quicksort(int izq, int der){
    if(izq >= der){
        return;
    }
    int i = izq, j = der;
    while(i < j){
        while(i < j and grupo[i].getCod() <= grupo[der].getCod()){
            i++;
        }
        while(i < j and grupo[j].getCod() >= grupo[der].getCod()){
            j--;
        }
        if(i!=j){
            intercambio(i, j);
        }
    }
    if(i!= der){
        intercambio(i, der);
    }
    quicksort(izq, i-1);
    quicksort(i+1, der);
}