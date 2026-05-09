#include<iostream>
using namespace std;

int main()
{
	int ib,in,d;
	cout<<"Ingrese importe bruto:";
	cin>>ib;

	if(ib<20000)
		{
			cout<<"Importe neto es:"<<ib<<endl;
		}
	else
		{
			d = ib * 0.15;
			in = ib - d;
			cout<<"Importe neto es:"<<in<<endl;
			cout<<"Se aplico un descuento de:"<<d<<endl;

		}

	return 0;
}