#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingrese un numero:"<<endl;
    cin>>n;

    if (n==1)
    {
        cout<<"Lunes";
    }
    if (n==2)
    {   
        cout<<"Martes";
    }
    if(n==3)
    {
        cout<<"Miercoles";
    }
    if (n==4)
    {
        cout<<"Jueves";
    }
    if (n==5)
    {
        cout<<"Viernes";
    }
    if (n==6)
    {
       cout<<"Sabado";
    }
    if (n==7)
    {
        cout<<"Domingo";
    }
    return 0;
}