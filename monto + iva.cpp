#include <iostream>
using namespace std;

	void calcularIVA(float a);
	
int main(){
	
	float iva;
	
	cout << "Ingrese el monto de la compra: " << endl;
	cin >> iva;
	
	calcularIVA(iva);
	
	return 0;
}

void calcularIVA(float a){
	float b, c;
	
	b = a * 0.12;
	
	cout << "El IVA de su compra es de: " << b <<endl;
	
	c = a + b;
	
	cout << "El monto de su compra final es de: " << c << endl;
}