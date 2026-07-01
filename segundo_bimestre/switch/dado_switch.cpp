#include<iostream>
using namespace std;

int main()
{   
    int cara;
    cout<<"Ingrese el numero para saber la cara opuesta del dado(1-6):\n";
    cin>>cara;

    switch (cara)
    {
    case 1:
        cout<<"6";
        break;
    case 2:
        cout<<"5";
        break;
    case 3:
        cout<<"4";
        break;
    case 4:
        cout<<"3";
        break;
    case 5:
        cout<<"2";
        break;
    case 6:
        cout<<"1";
        break;                

    default:
        cout<<"Numero invalido\n";
        break;
    }
}