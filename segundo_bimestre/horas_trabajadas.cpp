#include<iostream>
using namespace std;

int main()
{
    int h,ht,hx,ss,thx,tht;

    cout<<"Ingrese horas:"<<endl;
    cin>>h;
    
    if (h<=40)
    {
        ht = h*20;
        cout<<"Sueldo semanal es: "<<ht<<endl;

    }
    else
    {
        hx = h - 40;
        ht = h-hx;
        tht = ht*20;
        thx = hx*25;
        ss = thx + tht; 
        cout<<"Sueldo semanal es: "<<ss<<endl;
    }
    
}