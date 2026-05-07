#include<iostream>
using namespace std;

int main(){
    int a,b;
    float r;

    cout<<"Ingrese un numero: ";
    cin>>a;
    cout<<"Ingrese otro numero: ";
    cin>>b;
    r = a+b;
    cout<<"La suma es:"<<r<<endl;
    cout<<"Ingrese un numero: ";
    cin>>a;
    cout<<"Ingrese otro numero: ";
    cin>>b;
    r = a-b;
    cout<<"La resta es:"<<r<<endl;
    cout<<"Ingrese un numero: ";
    cin>>a;
    cout<<"Ingrese otro numero: ";
    cin>>b;
    r = a*b;
    cout<<"La multiplicacion es: "<<r<<endl;
    cout<<"Ingrese un numero: ";
    cin>>a;
    cout<<"Ingrese otro numero: ";
    cin>>b;
    r = a/b;
    cout<<"La division es: "<<r<<endl;
}