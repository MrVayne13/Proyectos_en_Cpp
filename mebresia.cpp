#include <iostream>
using namespace std; 
int main ()
{
	float y;
	char x;
	float Precio;
	float pago;
	
	cout << "Ingrese el monto de la compra: " << endl;
	cin >> y;
	cout << "Que tipo de membresia tiene? " << endl;
	cin >> x;
	
	if(x == 'a')
	{
		pago = y * 10 / 100;
		Precio = y - pago;
		cout << "Su membresia tiene un 10% de descuento y el precio a pagar es de: " << Precio << endl;
	}
	
	if(x == 'b')
	{
		pago = y * 15 / 100;
		Precio = y - pago;
		cout << "Su membresia tiene un 10% de descuento y el precio a pagar es de: " << Precio << endl;
	}
	
	if(x == 'c')
	{
		pago = y * 20 / 100;
		Precio = y - pago;
		cout << "Su membresia tiene un 10% de descuento y el precio a pagar es de: " << Precio << endl;
	}
	
	cout << "Gracias Por su compra" << endl;
}