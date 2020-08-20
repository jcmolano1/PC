//
// Created by Jose Carlos Molano on 20/08/20.
//
#include <iostream>
#include "Funciones.h"
using namespace std;

int main() {
    int *n = new int;
    cout<<endl;
    int *o=new int;
    int *p;
    int **p1;
    cout<<"Nombre: Jose Carlos Molano de Oro"<<endl;
    cout<<"Taller 2 Apuntadores y Memoria Dinámica: Numeros de Perrin"<<endl<<endl;
    do{
        menu();
        cin>>*o;
        cout<<endl;
        switch (*o) {
            case 0:
                tam(n);
                break;
            case 1:
                p=new int [*n];
                llenado(n,p);
                break;
            case 2:
                p1= new int *[*n];
                primos(n,&(*p),p1);
                break;
            case 3:
                primosnull (n,p1,&(*p));
                break;
        }
    } while (*o!=4);
    delete[] p;
    delete[] p1;
    delete n;
    delete o;
    return 0;
}



