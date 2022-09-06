#include <iostream>
using namespace std; 
int main ()
{
	float Nota1;
	float Nota2;
	float Nota3;
	float Notafinal;
	
	cout << "Ingrese las notas: " << endl;
	cin >> Nota1;
	cin >> Nota2;
	cin >> Nota3;
	
	Notafinal = (Nota1 + Nota2 + Nota3) / 3;
	
	
	if (Notafinal < 9.5)
	{
		cout << "Lo lamentamos, su nota fue de: " << Notafinal << " No aprobo." << endl;
	}else
	{
		cout << "Felicidades, su nota fue de: " << Notafinal << " ,logro aprobar." << endl;
	}
	
	
}