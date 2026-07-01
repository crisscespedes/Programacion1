#include<iostream>
using namespace std;

int main()
{
    int n{},s{0},c{0};
    cin>>n;
    while (n>=1)
    {
        s = s+n;
        ++c;
        --n;
    }
    float p = (float)s/(float)c;
    cout<<"El promedio es: "<<p<<"\n";
    
    return 0;
}
