#include <iostream>
using namespace std; 
int main ()
{
	int sueldoBase1 = 20;
	int sueldoBase2 = 25;
	int sueldoHora;
	int Horas;
	int horasExtras;
	int sueldoExtra;
	int x;
	int y;
	
	cout<<"¿cuantas horas trabajo esta semana? "<<endl;
	cin>>Horas;
	
	if (Horas <= 40)
	{
		sueldoHora = Horas * sueldoBase1;
		cout<<"El sueldo de esta semana es de: "<<sueldoHora<<"$"<<endl;
	}
	
	if (Horas > 40)
	{
		x = 40 * sueldoBase1;
		horasExtras = Horas - 40;
		y = horasExtras * sueldoBase2;
		sueldoHora = x + y;
		cout<<"El sueldo de esta semana es de: "<<sueldoHora<<"$"<<endl;
	}
	
}