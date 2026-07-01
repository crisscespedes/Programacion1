#include<iostream>
using namespace std;
int main()
{
    char letra;
    cout<<"Ingrese una letra (entre la A a la F):\n";
    cin>>letra;
    
    switch (letra)
    {
        case 'a': case 'A': cout<<"Excelente, aprobado con honores\n"; break;
        case 'b': case 'B': cout<<"Aprobado de forma sobresaliente\n"; break;
        case 'c': case 'C': cout<<"Aprobado con buen desempeño\n"; break;
        case 'd': case 'D': cout<<"Aprobado de manera regular\n"; break;
        case 'e': case 'E': cout<<"Aprobado, pero se sugiere mejorar\n"; break;
        case 'f': case 'F': cout<<"Reprobado, con rendimiento pobre\n"; break;
        default: cout<<"Nota ingresada es incorrecta\n"; break;
    }
    return 0;
}