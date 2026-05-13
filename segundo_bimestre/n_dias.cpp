#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingrese un numero:"<<endl;
    cin>>n;

    if (n==1)
    {
        cout<<"Lunes"<<endl;
    }
    else if (n==2)
    {
        cout<<"Martes"<<endl;
    }
    else if (n==3)
    {
        cout<<"Miercoles"<<endl;
    }
    else if (n==4)
    {
        cout<<"Jueves"<<endl;
    }
    else if(n==5)
    {
        cout<<"Viernes"<<endl;
    } 
    else if (n==6)
    {
        cout<<"Sabado"<<endl;
    }
    else if (n==7)
    {
        cout<<"Domingo"<<endl;
    }
    else
    {
        cout<<"Numero invalido"<<endl;
    }
}