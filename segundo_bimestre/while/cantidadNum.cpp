#include<iostream>
using namespace std;

int main()
{
    int cant{},num{},s{0},n{0};

    cout<<"Ingrese cantidad de numeros: ";
    cin>>cant;

    while (n<cant)
    {
        cout<<"Ingrese numero: ";
        cin>>num;

        s = s+num;
        n++;
    }
    cout<<"La suma es: "<<s<<"\n";
    return 0;
}