#include <iostream>
using namespace std;

int main()
{
	int dia;
	int mes;
	int diasTrans;
	
	cout << "ingrese el dia: " << endl;
	cin >> dia;
	cout << "ingrese el mes: " << endl;
	cin >> mes;
	
	switch (mes)
	{
		case 1:
			diasTrans = dia;
			cout << "El total de dias transcurridos hasta el mes de Enero es de: " << diasTrans << endl;
			break;
		
		case 2:
			diasTrans = dia + 31;
			cout << "El total de dias transcurridos hasta el mes de Febrero es de: " << diasTrans << endl;
			break;
		
		case 3:
			diasTrans = dia + 59;
			cout << "El total de dias transcurridos hasta el mes de Marzo es de: " << diasTrans << endl;
			break;
		
		case 4:
			diasTrans = dia + 90;
			cout << "El total de dias transcurridos hasta el mes de Abril es de: " << diasTrans << endl;
			break;
		
		case 5:
			diasTrans = dia + 120;
			cout << "El total de dias transcurridos hasta el mes de Mayo es de: " << diasTrans << endl;
			break;
		
		case 6:
			diasTrans = dia + 151;
			cout << "El total de dias transcurridos hasta el mes de Junio es de: " << diasTrans << endl;
			break;
		
		case 7:
			diasTrans = dia + 181;
			cout << "El total de dias transcurridos hasta el mes de Julio es de: " << diasTrans << endl;
			break;
		
		case 8:
			diasTrans = dia + 212;
			cout << "El total de dias transcurridos hasta el mes de Agosto es de: " << diasTrans << endl;
			break;
			
		case 9:
			diasTrans = dia + 243;
			cout << "El total de dias transcurridos hasta el mes de Septiembre es de: " << diasTrans << endl;
			break;
		
		case 10:
			diasTrans = dia + 273;
			cout << "El total de dias transcurridos hasta el mes de Octubre es de: " << diasTrans << endl;
			break;
		 
		case 11:
			diasTrans = dia + 304;
			cout << "El total de dias transcurridos hasta el mes de Noviembre es de: " << diasTrans << endl;
			break;
		
		case 12:
			diasTrans = dia + 334;
			cout << "El total de dias transcurridos hasta el mes de Diciembre es de: " << diasTrans << endl;
			break;	
		
		default:
			cout << "mes incorrecto" << endl;	
			break;	
	}
	
	
	return 0;
}