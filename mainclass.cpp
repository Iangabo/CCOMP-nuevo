#include <iostream>
#include "Curso.h"

using namespace std;

int main()
{

    Curso cursos[6];
    cursos[0].nombre="Religion";
    cursos[0].promedio=20;
    cursos[1].nombre="ICC";
    cursos[1].promedio=16;
    cursos[2].nombre="Matematica";
    cursos[2].promedio=12;
    cursos[3].nombre="Literatura";
    cursos[3].promedio=20;
    cursos[4].nombre="Antropologia";
    cursos[4].promedio=17;
    cursos[5].nombre="Persona";
    cursos[5].promedio=20;
    //Imprimir
    cout<<cursos[0].nombre<<endl;
    cout<<cursos[0].promedio<<endl;
    cout<<cursos[1].nombre<<endl;
    cout<<cursos[1].promedio<<endl;
    cout<<cursos[2].nombre<<endl;
    cout<<cursos[2].promedio<<endl;
    cout<<cursos[3].nombre<<endl;
    cout<<cursos[3].promedio<<endl;
    cout<<cursos[4].nombre<<endl;
    cout<<cursos[4].promedio<<endl;
    cout<<cursos[5].nombre<<endl;
    cout<<cursos[5].promedio<<endl;

    int TAM=6;

    for (int i=1; i<TAM; i++){
          for (int j=0 ; j<TAM - 1; j++){
               if (cursos[j].promedio > cursos[j+1].promedio){
                    int temp = cursos[j].promedio;
                    cursos[j].promedio = cursos[j+1].promedio;
                    cursos[j+1].promedio = temp;
                    }
          }
}

    cout<<"ORDENADO"<<endl;
    cout<<""<<endl;

    cout<<cursos[0].nombre<<endl;
    cout<<cursos[0].promedio<<endl;
    cout<<cursos[1].nombre<<endl;
    cout<<cursos[1].promedio<<endl;
    cout<<cursos[2].nombre<<endl;
    cout<<cursos[2].promedio<<endl;
    cout<<cursos[3].nombre<<endl;
    cout<<cursos[3].promedio<<endl;
    cout<<cursos[4].nombre<<endl;
    cout<<cursos[4].promedio<<endl;
    cout<<cursos[5].nombre<<endl;
    cout<<cursos[5].promedio<<endl;

}
