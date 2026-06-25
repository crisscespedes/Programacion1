#include<iostream>
using namespace std;

int main()
{
    int i{1};
    int n{};
    int c{0};
    cout<<"Ingrese un numero:\n";
    cin>>n;
    cout<<"Los multiplos son: ";
    while (i<=n)
    {
        if (i % 3 == 0)
        {   
            cout<<i<<" ";
            c++;
        }
        ++i;
    }
    
    cout<<"\n";
    cout<<"La cantidad de multiplos es: "<<c;
    return 0;
}

 