//Pide numeros al usuario uno a uno. Cuando el usuario ingrese 0, deten el bucle y muestra la suma total
//de todos los numeros ingresados
//pista : el bucle debe continuar mientras el numero sea distinto a 0.Acumula el numero en suma antes de pedir el siguiente
#include<iostream>
using namespace std;

int main()
{
    int n{},s{0};

    cout<<"Ingrese un numero: ";
    cin>>n;

    while (n!=0)
    {
        s = s+n;
        cout<<"Ingrese un numero: ";
        cin>>n;

        
        
    }
    cout<<s;

}