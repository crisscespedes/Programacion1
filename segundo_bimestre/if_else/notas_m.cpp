#include<iostream>
using namespace std;

int main()
{
    int nota;
    cout<<"Ingrese nota:"<<endl;
    cin>>nota;

    if (nota<45)
    {
        cout<<"Nota invalida"<<endl;
    }
    else if (nota<=60)
    {
        cout<<"Debe mejorar"<<endl;
    }
    else if (nota<=70)
    {
        cout<<"Satisfactorio"<<endl;
    }
    else if (nota<=85)
    {
        cout<<"Buena"<<endl;
    }
    else if (nota<=100)
    {
        cout<<"Excelente"<<endl;
    }
    else
    {
        cout<<"Nota invalida"<<endl;
    }
    
}