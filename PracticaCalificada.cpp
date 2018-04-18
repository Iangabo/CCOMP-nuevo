#include <iostream>

using namespace std;
/*
//Pregunta 1

bool esPerfecto(int x)
{
    int contador=0;
    for(int i=1; i<x ;i++){
        if(x%i==0){
            contador=contador+1;
        }
    }
    if(contador==x){
        return true;

    }
    else{
        return false;

    }
}

int main()
{
    esPerfecto(10);
}

*/
//Pregunts 2
/*
bool esPrimo(int x)
{
    int contador=0;
    for(int i=1; i<=x ; i++){
        if(x%i==0){
            contador++;
        }
    }
    if (contador==2){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int x;
    cout<<"Ingrese un numero: "<<endl;
    cin>>x;
    for(int i=1;i<=x;i++){
        if(esPrimo(i)){
            cout<<i<<endl;
        }
    }
}

*/
//Pregunta 3
int potencia(int base, int exponente)
{
    if(exponente==0){
        return 1;
    }
    else{
        base=base*potencia(base, exponente-1);
    }
    return base;
}

int main()
{
    cout<<potencia(3,3);
}
