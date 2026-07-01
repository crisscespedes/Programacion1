#include<iostream>
using namespace std;

int main()
{
    int n{},i{1};
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"Los numeros pares son: ";
    
    while (i<=n)
    {
        if (i % 2 == 0)
        {
            cout<<i<<" ";
        }
        i++;
        
    }
    
    i = 1;
    cout<<"\nLos numeros impares son: ";
    while (i<=n)
    {
        if (i % 2 == 1)
        {
            cout<<i<<" ";
        }
        i++;
    }
    
    
    cout<<"\n";
    return 0;
}