#include <iostream>

using namespace std;

int main (){
    int x,y;
    cout<<"Ingrese un valor para x: "<<endl;
    cin>>x;
    cout<<"Ingrese un valor para y: "<<endl;
    cin>>y;
    if(x%y){
        cout<<"No es multiplo";
    }
    else {
        cout<<"Es multiplo";
    }
    return 0;
 }
