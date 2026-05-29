#include<iostream>
using namespace std;

int main()
{
    char vocal;
    cout<<"Ingrese la calificacion (letra, entre la A a la F):\n";
    cin>>vocal;

    switch (vocal)
    {
    case 'a':
    case 'A':
        cout<<"Excelente, aprobado con honores";
        break;
        
    case 'b':
    case 'B':
        cout<<"Aprobado de forma sobresaliente";
        break;
    case 'c':
    case 'C':
        cout<<"Aprobado con buen desempeño";
        break;        
    case 'd':
    case 'D':
        cout<<"Aprobado de manera regular";
        break;
    case 'e':
    case 'E':
        cout<<"Aprobado, pero se sugiere mejorar";
        break;
    
    case 'f':
    case 'F':
        cout<<"Reprobado, con rendimiento pobre";
        break;

    default:
        cout<<"Nota ingresada es incorrecta\n";
        break;
    }
    return 0;
}