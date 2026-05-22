#include<iostream>
using namespace std;

int main()
{
    char vocal;
    cout<<"Ingrese una vocal:\n";
    cin>>vocal;

    switch (vocal)
    {
    case 'a':
    case 'A':
        cout<<"Es la vocal a";
        break;
        
    case 'e':
    case 'E':
        cout<<"Es la vocal e";
        break;
    case 'i':
    case 'I':
        cout<<"Es la vocal i";
        break;        
    case 'o':
    case 'O':
        cout<<"Es la vocal o";
        break;
    case 'u':
    case 'U':
        cout<<"Es la vocal u";
        break;    

    default:
        cout<<"No es una vocal\n";
        break;
    }
    return 0;
}