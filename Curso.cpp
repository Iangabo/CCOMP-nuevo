#include "Curso.h"
#include <sstream>
Curso::Curso(string n,int prom)
{
    nombre=n;
    promedio=prom;
}

void Curso::setearPromedio(int prom)
{
    promedio=prom;
}
void Curso::setearNombre(string n)
{
   nombre=n;
}

int Curso::obtenerPromedio()
{
    return promedio;
}

string Curso::obtenerNombre()
{
    return nombre;
}

string Curso::obtenerInfo()
{
    stringstream ss;
    ss<<promedio;
    return "El nombre del curso es: " + nombre + ", el promedio es: " + ss.str();
}

void Curso::setearNotas(int a,int b, int c,int d, int e)
{

}

void Curso::obtenerMayornota()
{

}

void Curso::obtenerMenornote()
{
    
}

void Curso::obtenerPromedionotas()
{
    
}
