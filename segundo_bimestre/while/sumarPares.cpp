#include<iostream>
using namespace std;

int main()
{
    int m{},n{},s{0};
    cout<<"Ingrese dos numeros: \n";
    cin>>m>>n;

    while (m<=n)
    {
        
        if (m % 2 == 0)
        {
            s = s + m;
        }
        ++m;
    }
    
    cout<<"La suma de pares es: "<<s<<"\n";
    return 0;
}