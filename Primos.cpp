#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=1;
    cout<<"Ingrese un numero: "<<endl;
    cin>>a;

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
