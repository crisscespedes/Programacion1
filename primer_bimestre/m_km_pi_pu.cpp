#include<iostream>
using namespace std;

int main(){
    
    float km,pi,pu,m;
    cout<<"Ingrese metros: ";
    cin>>m;
    km = m/1000;
    pi = m*3.28;
    pu = m*39.37;
    cout<<"El distancia en km es:"<<km<<endl;
    cout<<"El distancia en pies es:"<<pi<<endl;
    cout<<"El distancia en pulgadas es:"<<pu<<endl;
}