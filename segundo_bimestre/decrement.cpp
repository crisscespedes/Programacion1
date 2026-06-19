#include<iostream>
using namespace std;

int main ()
{
    int n{};
    cout<<"Ingrese un numero:\n";
    cin>>n;

    while (n>=1)
    {
        cout<<n<<" ";
        n--;
    }
    cout<<"Feliz año nuevo !!!\n";
    return 0;
}