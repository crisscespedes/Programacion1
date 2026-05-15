#include<iostream>
using namespace std;

int main ()
{
    float n1,n2,n3,n4;
    float p_notas;

    cout<<"Ingrese 4 notas:"<<endl;
    cin>>n1>>n2>>n3>>n4;

    
    p_notas = (n1+n2+n3+n4)/4;

   
    
    
    if (p_notas>=61)
    {
        cout<<"Aprobado"<<endl;
    }
    else
        cout<<"Reprobado"<<endl;
}