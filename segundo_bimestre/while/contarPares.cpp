#include<iostream>
using namespace std;

int main()
{
    int n{},c{1};
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"Los numeros pares son: ";
    while (c<=n)
    {
        if (c % 2 == 0)
        {
            cout<<c<<" ";
        }
       
        c++;
        
    }
    cout<<"\n";
    return 0;
}