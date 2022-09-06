#include <iostream>
#include <string>
using namespace std;

struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
};

int main(){
	
	Alumno alum1,alum2,alum3;
	float mayor;
	
	cout << "Ingrese los nombres de los alumnos: " << endl;
	cout << "Alumno 1: "; cin.getline(alum1.nombre, 20);
	cout << "Alumno 2: "; cin.getline(alum2.nombre,20);
	cout << "Alumno 3: "; cin.getline(alum3.nombre,20);
	cout << "Ingrese las edades de los alumnos: " << endl;
	cout << "Alumno 1: "; cin >> alum1.edad;
	cout << "Alumno 2: "; cin >> alum2.edad;
	cout << "Alumno 3: "; cin >> alum3.edad;
	cout << "Ingrese los promedios de los alumnos: " << endl;
	cout << "Alumno 1: "; cin >> alum1.promedio;
	cout << "Alumno 2: "; cin >> alum2.promedio;
	cout << "Alumno 3: "; cin >> alum3.promedio;
	
	cout << "\n El estudiante con mejor promedio es: " << endl;
	
	if(alum1.promedio >= alum2.promedio){
		mayor = alum1.promedio;
		cout << "Nombre: " << alum1.nombre << endl;
		cout << "Edad: " << alum1.edad << endl;
		cout << "Promedio: " << mayor << endl;
	}else if(alum2.promedio >= alum3.promedio){
		mayor = alum2.promedio;
		cout << "Nombre: " << alum2.nombre << endl;
		cout << "Edad: " << alum2.edad << endl;
		cout << "Promedio: " << mayor << endl;
	}else if(alum3.promedio >= alum1.promedio){
		mayor = alum3.promedio;
		cout << "Nombre: " << alum3.nombre << endl;
		cout << "Edad: " << alum3.edad << endl;
		cout << "Promedio: " << mayor << endl;
	}
	
	return 0;
}