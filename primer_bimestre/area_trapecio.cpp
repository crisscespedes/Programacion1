#include<iostream>
using namespace std;
int main(){
    int b1,b2,h;
    float a;
    cout<<"Ingrese la base mayor: ";
    cin>>b1;
    cout<<"Ingrese la base menor:  ";
    cin>>b2;
    cout<<"Ingrese la altura: ";
    cin>>h;
    a = ((b1+b2)/2)*h;
    cout<<"EL AREA DE UN TRAPECIO ES : "<<a<<endl;
}