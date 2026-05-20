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
        cout<<"Es la vocal a";
        break;
    case 'e':
        cout<<"Es la vocal e";
        break;
    case 'i':
        cout<<"Es la vocal i";
        break;        
    case 'o':
        cout<<"Es la vocal o";
        break;
    case 'u':
        cout<<"Es la vocal u";
        break;    

    default:
        cout<<"No es una vocal\n";
        break;
    }
    return 0;
}