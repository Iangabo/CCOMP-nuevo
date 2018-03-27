#include <iostream>
using namespace std;

 int main()
 {
     int a,b,c;
     cout<<"Ingrese un valor para x: "<<endl;
     cin>>a;
     cout<<"Ingrese un valor para y: "<<endl;
     cin>>b;
     cout<<"Ingrese un valor para z: "<<endl;
     cin>>c;

     if (a>b&&a>c)
        {
        cout<<"El mayor es: "<<a;
     }
          if (b>a&&b>c)
        {
        cout<<"El mayor es: "<<b;
     }
          if (c>b&&c>a)
        {
        cout<<"El mayor es: "<<c;
     }

     return 0;


 }
