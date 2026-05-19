#include<iostream>
using namespace std;

int main ()
{
    float n1,n2,n3,n4;
    float p_notas;

    cout<<"Ingrese 4 notas: \n";
    cin>>n1>>n2>>n3>>n4;

    
    p_notas = (n1+n2+n3+n4)/4;

   
   
    
    if (p_notas>=61)
    {
        cout<<"Aprobado\n";
    }
    else
        cout<<"Reprobado\n";
    return 0;
}