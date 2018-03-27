#include <iostream>

using namespace std;

int main (){

 int a,b,c,d,e;
 cout<<"Ingrese un valor para a: "<<endl;
 cin>>a;
 cout<<"Ingrese un valor para b:"<<endl;
 cin>>b;
 cout<<"Ingrese un valor para c:"<<endl;
 cin>>c;
 cout<<"Ingrese un valor para d:"<<endl;
 cin>>d;
 cout<<"Ingrese el un valor para e:"<<endl;
 cin>>e;
 int mayor=a;
 int menor=b;
 if(b>mayor){
    mayor=b;
    }
 if (c>mayor){
    mayor=c;
 }
  if (d>mayor){
    mayor=d;
 }
  if (e>mayor){
    mayor=e;
 }


 if (menor>a){
    menor=a;
 }
 if (menor>c){
    menor=c;
 }
 if (menor>d){
    menor=d;
    }
 if (menor>e){
    menor=e;
   }
 cout<<"El mayor es "<<mayor<<endl;
 cout <<"El menor es"<<menor<<endl;
 return 0;
 }
