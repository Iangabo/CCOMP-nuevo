#include <iostream>

using namespace std;

//Pregunta 1
//Iterativa

int suma(const int array[],const int largo)
{
    long suma=0;
    for(int i=0;i<largo;suma +=array[i++]);
        return suma;
}


//recursiva
int sumaRecursiva(int array[],int largo)
{
    int suma=0;
    if(largo==1)
        {
        suma+=array[0];
        }
    else
        {
        suma=array[largo-1]+sumaRecursiva(array,largo-1);
    }
}

//pregunta 2
int invertir(int largo,int array[]){
    int a;
    for(int i=0; i < largo/2; i++){
      int a = array[i];
      array[i] = array [largo - i];
      array[largo - i] =a;
    }
    return a;
}

//pregunta 3

int tamanio(char array[])
{

    for(int i=0;array[i]==i;i++){
        cout<<i<<endl;
    }

}

int main()
{
    //pregunta 1
    //iterativa
    int arr[]={1,2,3,4,5,6,7};
    cout<<"La suma es: "<<suma(arr,7)<<endl;
    return 0;
    //recursiva

    int array[]={1,2,3,4,5,6,7};
    cout<<sumaRecursiva(array,7);
    //pregunta2
    int array[]={1,2,3,4,5};
    cout<<invertir(5,array);
    return 0;

    //pregunta 3
    char array[]={1,2,3,4,5};
    tamanio(array);
    return 0;

}









