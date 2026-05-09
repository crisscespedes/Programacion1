#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingrese un numero:"<<endl;
    cin>>n;

    if (n<0)
    {
        cout<<"Valor absoluto es:"<<-n<<endl;
    }
    else
        cout<<"Valor absoluto es:"<<n<<endl;

    return 0;
}
