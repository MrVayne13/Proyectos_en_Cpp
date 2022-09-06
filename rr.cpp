#include <iostream>
#include <string>
using namespace std;

int main()
{
	int hora;
	int minutos;
	int segundos;
	string tiempo;
	int min;
	int hor;
	int seg;
	int totalSegundos;
	
	
	cout << "ingrese la hora: " << endl;
	cin >> hora;
	cout << "ingrese los minutos: " << endl;
	cin >> minutos;
	cout << "ingrese los segundos: " << endl;
	cin >> segundos;
	cout << "ingrese si es am/pm: " << endl;
	cin >> tiempo;
	
	hor = hora * 60;
	min = minutos + hor;
	seg = segundos + (min * 60);
	
	if (tiempo == "am")
	{
		cout << "El tiempo trancurrido desde las: "<< hora << ":" << minutos << ":" << segundos << " " << tiempo << " en segundos es de: " << seg << endl;
	}else 
	if (tiempo == "pm")
	{
		totalSegundos = 43200 + seg;
		cout << "El tiempo trancurrido desde las: "<< hora << ":" << minutos << ":" << segundos << " " << tiempo << " en segundos es de: " << totalSegundos << endl;
	}
	
	return 0;
}

