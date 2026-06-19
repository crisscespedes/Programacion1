#include<iostream>
using namespace std;

int main()
{
    int m{},n{},c{0},s{0},p{};

    cout<<"Ingresar dos numeros:\n";
    cin>>m>>n;
    cout<<"El rango es: ";
    while (m<=n)
    {   
        cout<<m<<" ";
        if (m % 2 == 0)
        {
           
            s = s+m;
            c++;
            
        }
        m++;
        
    }
    p = s/c;
    cout<<"\n";
    cout<<"Cantidad de numeros pares: "<<c<<"\n";
    cout<<"Promedios es: "<<p<<"\n";
}