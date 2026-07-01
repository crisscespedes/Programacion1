#include<iostream>
using namespace std;

int main()
{
    int m{},n{},c{0},s{0};
    cout<<"Ingrese dos numeros: \n";
    cin>>m>>n;

    while (m<=n)
    {
        
        if (m % 2 == 0)
        {
            s = s + m;
            ++c;
        }
        ++m;
    }
    
    cout<<"EL promedio de pares es: "<<s/c<<"\n";
    return 0;
}