#include <iostream>
using namespace std;

int main()
{
	int edad, numHijos, CI;
	char sexo;
	float sueldo, bono;
	
	cout << "Ingrese el CI del empleado por calcular su bono: " << endl;
	cin >> CI;
do {
	cout << "Ingrese su edad:" << endl;
	cin >> edad;
	cout << "Hombre o mujer (h/m):" << endl;
	cin >> sexo;
	cout << "Ingrese su sueldo actual:" << endl;
	cin >> sueldo;
   	
	if(edad < 25){
		bono = sueldo * 0.25;
	}
	if(edad >= 25 && edad <= 45){
		bono = sueldo * 0.30;
	}
	if(edad > 45){
		bono = sueldo * 0.40;
	}
	
	
	if(sexo == 'm'){
		cout << "Ingrese su numero de hijos:" << endl;
		cin >> numHijos;
		bono += numHijos * 100000;
	}
	
	if (bono > 3000000){
		bono = 3000000;	
	}
	
	cout << "Bono para " << CI << " es de: " << bono << " Bs" << endl;
	
	cout << "Ingrese el CI del siguente empleado por calcular bono: " << endl;
	cin >> CI;
	
	} while (CI != 0);
	return 0;
}