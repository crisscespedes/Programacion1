#include<iostream>
using namespace std;

int main()
{
    int a{}, b{}, c{}, d{};

    cout<<"Ingrese 4 numeros:\n";
    cin>>a>>b>>c>>d;

    if ((a>b) && (a>c) && (a>d))
    {
        cout<<"El mayor es:"<<a<<"\n";
    }
    if ((b>a) && (b>c) && (b>d))
    {
        cout<<"El mayor es:"<<b<<"\n";
    }
    if ((c>a) && (c>b) && (c>d))
    {
        cout<<"El mayor es:"<<c<<"\n";
    }
    if ((d>a) && (d>b) && (d>c))
    {
        cout<<"El mayor es:"<<d<<"\n";
    }
    return 0;
}