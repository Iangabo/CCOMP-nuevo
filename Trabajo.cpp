#include <iostream>

using namespace std;

/*
//Problema 1:

bool esMayor(int edad){
return (edad<=18) ? cout<<"Es menor de edad":"Es mayor de edad";

}
int main()
{
    esMayor(12);
}


//Problema 2
int num(int n)
{
    int a=0;
    while (a!=n)
    {
        cout<<a<<",";
        a++;
        if (a==n){
            cout<<a;
            break;
        }
    }
}

int main()
{
    num(11);

}

*/
//Problema 3
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
 int prom=(a+b+c+d+e)/5;
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
 cout <<"El promedio es: "<<prom<<endl;

 return 0;
 }
}
/*
//Problema 4

int main()
{
    int a,b;
    cout<<"Ingrese un valor para a: "<<endl;
    cin>>a;
    cout<<"Ingrese un valor para b: "<<endl;
    cin>>b;

    if(a%2==0){
        cout<<"El primero es multiplo de dos"<<endl;
    }
    else{
        cout<<"El primero no es multiplo de dos"<<endl;
    }

     if(b%2==0){
        cout<<"El segundo es multiplo de dos"<<endl;
    }
    else{
        cout<<"El segundo no es multiplo de dos"<<endl;
    }

    if(a%b==0){
        cout<<"El primero es multiplo del segundo"<<endl;
    }
    else{
        cout<<"El primero no es multiplo del segundo"<<endl;
    }
    if((a*a)==b){
        cout<<"El primero elevado al cuadrado es igual al segundo"<<endl;
    }

}



//Problema 5
int primo(int a)
{
     int b=1;

    for(int i=0;i<=a;i++){
            b++;
            if(i%b){
                cout<<"es primo"<<endl;
                break;
            }
            else {
                cout<<"no primo"<<endl;
                break;

            }
    }
    return 0;

}
int main()
{
    primo(15);
}





//Problema 6




//Problema 7
int separacion(int a)
{
    int d,b=10000;
	while(b>=0){
		int b,c;
	c=a;
	for(int i=1;i<c;i++){
		a=a*i;
	}
	cout<<"El factorial es: "<<a;
	return 0;
	d=a/b;
		cout<<d<<"	";
		a=a%b;
		b=b/10;
	}
	return 0;
}
int main()
{
	separacion(12345);
}





//Problema 8
int Palindrome(int c)
{
    int a,d,b=10000,m=0;
	a=c;
	while(a>=1){
		d=a%10;
		m=m+(d*b);
		b=b/10;
		a=a/10;}
	if(c==m){
		cout<<c<<" Es un numero Palindrome"<<endl;
	}
	else{
		cout<<c<<" No es un numero palindrome"<<endl;
	}
}
int main()
{
	Palindrome(12321);

}


//Problema 9
int anio(int a)
{
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
         cout<<"El anio "<<a<<"es bisiesto ";
     }else{
         cout<<"El anio "<<a<<" no es bisiesto ";
     }
      return 0;

}
int main()
{
        anio(1456);
}



//Problema 10
//Factorial
int factorial(int a)
{
    int b,c;
	c=a;
	for(int i=1;i<c;i++){
		a=a*i;
	}
	cout<<"El factorial es: "<<a;
	return 0;

}
int main()
{

    factorial(3);
}


*/






