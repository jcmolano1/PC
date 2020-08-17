#include <iostream>
#include<stdlib.h>
using namespace std;

int llenado (int *v)
{
    srand(time(0));
    for (int i=0;i<10;i++)
    {
        *(v+i)=rand() % 100;
    }

    return *v;
}
void printvector(int *v)
{
    for (int i=0;i<10;i++)
    {
        cout<<*(v+i)<<"  ";
    }

}
void printdir(int *v)
{
    for (int i=0;i<10;i++)
    {
        cout<<&(*(v+i))<<"  ";
    }

}
int direccion (int *v, int **d)
{
    for (int i=0;i<10;i++)
    {
        *(d+i)=&((*(v+i)));
    }

    for (int i=0;i<10;i++)
    {
        return **(d+i);
    }
}
void printresul(int **d)
{

    for (int i=0;i<10;i++)
    {
        cout<<*(d+i)<<"  ";
    }
    cout<<endl;


}
void printnum(int **d)
{
    for (int i=0;i<10;i++)
    {
        cout<<**(d+i)<<"  ";
    }
}
int  ordenamiento(int **d)
{
    int *aux;
    for (int i=0;i<9;i++)
    {
        for (int j=i;j<10;j++)
        {
            if(**(d+i) > **(d+j)){
                aux = *(d+i);
                *(d+i) = *(d+j);
                *(d+j) = aux;
            }
        }
    }
    for (int i=0;i<10;i++)
    {
        return *(*d+i);
    }
}
void menu()
{
    cout<<"1. Llenado e Impresión de Vector de Numeros"<<endl;
    cout<<"2. Impresion de las Direcciones del Vector de Numeros Generado en [1]"<<endl;
    cout<<"3. Creación del Vector de Direcciones e Impresión de Vector resultante"<<endl;
    cout<<"4. Impresion de valores de Vector de Numeros a partir de Vector resultante"<<endl;
    cout<<"5. Proceso de Ordenamiento de direcciones a partir del vector de numeros"<<endl;
    cout<<"6. Impresión del Vector de Numeros a partir del Vector de Direcciones"<<endl;
    cout<<"7. Impresion del Vector Numeros original"<<endl;
    cout<<"8. Salir"<<endl;
}
int main() {
    int *v=new int[10];
    //int *d[10];
    int **d=new int*[10];
    int o=0;
    cout<<"Nombre: Jose Carlos Molano de Oro"<<endl<<endl;
    while (o!=8)
    {
        if (o==1)
        {
            llenado (&(*v));
            printvector (&(*v));
            cout<<endl;
        }
        if (o==2)
        {
            printdir(v);
            cout<<endl;
        }
        if (o==3)
        {
            direccion (&(*v),d);
            printresul(d);
        }
        if (o==4)
        {
            printnum(d);
            cout<<endl;
        }
        if (o==5)
        {
            cout<<"Ordenamiento exitoso"<<endl;
            ordenamiento(d);
            cout<<endl;
        }
        if (o==6)
        {
            printnum(d);
            cout<<endl;
        }
        if (o==7)
        {
            printvector (&(*v));
            cout<<endl;
        }
        cout<<endl;
        menu();
        cout<<"Opcion: ";
        cin>>o;
    }
    delete v;
    delete *d;
    return 0;
}
