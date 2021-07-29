#include <iostream>
#include <math.h>

using namespace std;

int menu()
{
    int opcion;
    cout<<"*********************************"<<endl;
    cout<<".:: BIENVENIDX ::."<<endl;
    cout<<"Elija el ejercicio que desea resolver"<<endl;
    cout<<"1. ..."<<endl;
    cout<<"2. ..."<<endl;
    cout<<"3. ..."<<endl;
    cout<<"4. ..."<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"*********************************"<<endl;
    cout<<endl;
    cin>>opcion;
    return opcion;
}

double normaVector(int v[]){

    double num=0;
    for(int i=0; i<20;i++){
        num=num + pow(v[i],2);
    }
    return sqrt(num);
}

double factorial(int a)
{
    double f=1;
    if(a!=0 && a!=1)
       for(int i=1;i<=a;i++)
          f*=i;
    return f;
}

int aleatorio_entre(int a, int b)
{
    srand(3); //semilla
    int x=a+rand()%(b+1-a);
    return x;
}

void ejercicio1()
{
    // Codigo
}

void ejercicio2()
{
    // Codigo
}

void ejercicio3()
{
    // Codigo
}

void ejercicio4()
{
    // Codigo
}

int main()
{
    int opcion;
    do{
        opcion=menu();
        switch(opcion)
        {
            case 1:
                ejercicio1();
            break;
            case 2:
                ejercicio2();
            break;
            case 3:
                ejercicio3();
            break;
            case 4:
                ejercicio4();
                break;
            case 0: cout<<"Fin del programa"<<endl;
            break;
            default: cout<<"No ha seleccionado una opcion correcta"<<endl;
        }
    }
    while(opcion!=0);
    return 0;
}
