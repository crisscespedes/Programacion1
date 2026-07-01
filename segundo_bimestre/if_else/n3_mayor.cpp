#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;

    cout<<"Ingrese 3 numeros:"<<endl;
    cin>>n1>>n2>>n3;

    if (n1>n2)
    {
        if (n1>n3)
        {
            cout<<n1<<" Es el mayor";
        }
        else
            cout<<n3<<" Es el mayor";
        
    }
    else
        if (n2>n3)
        {
            cout<<n2<<" Es el mayor";
        }
        else
            cout<<n3<<" Es el mayor"<<endl;
        
    return 0;
}