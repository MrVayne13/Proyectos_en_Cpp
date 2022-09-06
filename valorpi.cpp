#include <iostream>
using namespace std;

int main ()
{
	double n, valorPi;
	double numerador = 4;
	double denominador = 1;
	int operador = 1;
	
	cout << "ingrese hasta donde desea calcular PI" << endl;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		valorPi += operador * (numerador / denominador);
		denominador += 2;
		numerador *= -1;
	}
	
	cout << "el valor de pi es: " << valorPi;
	
	
	return 0;
}




	