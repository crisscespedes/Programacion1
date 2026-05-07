#include <iostream>
using namespace std;

int main(){
    int a,b,s,r,m;
    float d;
    cout<<"Ingrese un numero: ";
    cin>>a;
    cout<<"Ingrese otro numero: ";
    cin>>b;
    s = a+b;
    r = a-b;
    m = a*b;
    d = a/b;
    cout<<"La suma es: "<<s<<endl;
    cout<<"La resta es: "<<r<<endl;
    cout<<"La multiplicacion es: "<<m<<endl;
    cout<<"La division es: "<<d<<endl;
}