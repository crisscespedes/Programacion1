#include<iostream>
#include<cmath>
int main()
{
    float a,b,c,x1,x2;
    std::cout<< "Ingrese a: ";
    std::cin>> a;

    std::cout<< "Ingrese b: ";
    std::cin>> b;

    std::cout<< "Ingrese c: ";
    std::cin>> c;
    x1 = (-b+ std::sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b- std::sqrt(b*b-4*a*c))/(2*a);
    std::cout <<"x1 es: "<<x1<<std::endl;
    std::cout <<"x2 es: "<<x2<<std::endl;
    return 0;
}
                