#include <iostream>

using namespace std;

int main()
{
    int z,a,b,c,d,e;
    cin>>z;
        a=z%10;
        b=z%100/10;
        c=z%1000/100;
        d=z%10000/1000;
        e=z%100000/10000;

        cout<<e<<" "<<d<<" "<<c<<" "<<b<<" "<<a;
        return 0;
}

otra forma:

int main()
{
    int x;
    cin>>x;
    for(int i=10000;i>=1;i=i/10){
        int tmp=x/i;
        cout << tmp<<" ";
        x=x%i;
    }

}
