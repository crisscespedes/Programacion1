#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int s = 0;

    cout<<"Ingrese m: \n";
    cin>>m;
    cout<<"Ingrese n: \n";
    cin>>n;

    while (m<=n)
    {
        s = s+m;
        ++m;
    }
    cout<<"La suma es: "<<s<<endl;
    return 0;
}