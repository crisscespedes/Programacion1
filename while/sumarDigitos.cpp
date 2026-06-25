#include<iostream>
using namespace std;

int main()
{
    int n{},s{0};

    cout<<"Ingrese un numero positivo: \n";
    cin>>n;

    while (n>0)
    {
        int d = n % 10;
        n = n/10;
        s = s + d;
    
    }
    cout<<"Resultado: "<<s;

    return 0;
}