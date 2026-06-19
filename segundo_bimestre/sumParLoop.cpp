#include<iostream>
using namespace std;

int main()
{
    int m{}, n{};
    int s{};
    cout<<"Ingrese dos numeros: "<<'\n';
    cin>>m>>n;

    while (m<=n)
    {
        if (m % 2 == 0)
        {
            
            s= s + m;
        }
        m++;
        
        
    }
    return 0;
}