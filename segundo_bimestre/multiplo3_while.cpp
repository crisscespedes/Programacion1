#include<iostream>
using namespace std;

int main()
{
    int c{1};
    int n{};
    cout<<"Ingrese un numero:\n";
    cin>>n;
    while (c<=n)
    {
        if (c % 3 == 0)
        {
            cout<<c<<endl;
        }
        ++c;
    }
   
    
    return 0;
}