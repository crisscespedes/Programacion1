#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Ingrese un numero: "<<endl;
    cin>>a;

    if (a<200)
    {
        if (a%2==0)
        {
            cout<<"Menor que 200, Es par";
        }
        else
            if (a<200)
            {
                cout<<"Es menor que 200";
    
            }
            
    }
    else
        if (a%2==0)
        {
            cout<<"Es par";
        }
    return 0;     
    
}