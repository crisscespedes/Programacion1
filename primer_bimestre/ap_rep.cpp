#include<iostream>
using namespace std;

int main()
{
    float n1,n2,n3,n4,p;
    cout<<"Ingrese nota 1: ";
    cin>>n1;
    cout<<"Ingrese nota 2: ";
    cin>>n2;
    cout<<"Ingrese nota 3: ";
    cin>>n3;
    cout<<"Ingrese nota 4: ";
    cin>>n4;
    p = (n1+n2+n3+n4)/4;
    cout<<"Su promedio es: "<<p<<endl;
    if (p>=61)
    {
       cout<<"Aprobado";
    }
    else
        cout<<"Reprobado";
    return 0;
}