//
// Created by Jose Carlos Molano on 20/08/20.
//
#include <iostream>
#include "Funciones.h"
using namespace std;

int tam(int *n){
    cout<<"Ingrese tamaño del gector de perrin a generar: ";
    cin>>*n;
    return *n;
}
int llenado(const int *n, int *p)
{
    if (*n<=3)
    {
        *(p+0)=3;
        *(p+1)=0;
        *(p+2)=2;
    } else
    {
        for (int i=3;i<*n;i++){
            *(p+0)=3;
            *(p+1)=0;
            *(p+2)=2;
            *(p+i)=*(p+(i-2))+*(p+(i-3));
        }
    }
    cout<<"El vector de perrin es: ";
    for (int i=0;i<*n;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    return *p;
}
void menu(){
    cout<<"0. Ingresar tamaño del vector de perrin a generar"<<endl;
    cout<<"1. Funcion generar vector números de perrin de tamaño n e imprimirlos"<<endl;
    cout<<"2. Funcion generar vector de apuntadores números primos de perrin a partir del vector [1.] números de perrin e imprimirlos"<<endl;
    cout<<"3. Funcion imprimir que genera el vector de apuntadores numeros primos de perrin sin null"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Opcion: ";
}
int primos(const int *n, int *p, int **p1){

    int pos=0;
    int *n1=new int;
    for (int i=0;i<*n;i++){
        *(p1+i)=&(*n1);
    }
    for (int i=2;i<*n;i++)
    {
        if (*(p+i)%i==0 && *(p+i)>=i)
        {
            *(p1+pos)=&(*(p+i));
            pos++;
        }
    }
    cout<<"El vector de primos de perrin es: ";
    for (int i=0;i<*n;i++){
        cout<<**(p1+i)<<" ";
    }
    cout<<endl;
    return **p1;
}
void primosnull(const int *n,int **p1, const int *p)
{
    int cont=0;
    for (int i=0;i<*n;i++){
        if (**(p1+i)!=NULL) {
            cont++;
        }
    }
    cout<<"El tamaño del vector de apuntadores de perrin sin null es: "<<cont<<endl;
    int **auxi=new int*[cont];
    int j=0;
    for (int i=2;i<*n;i++)
    {
        if (*(p+i)%i==0 && *(p+i)>=i)
        {
            *(auxi+j)=(*(p1+j));
            j++;
        }
    }
    cout<<"Vector de apuntadores de perrin sin null es: ";
    for (int i=0;i<cont;i++){
        cout<<**(auxi+i)<<" ";
    }
    cout<<endl;
    delete[] auxi;
}