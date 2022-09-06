#include <iostream>
using namespace std;

class Persona{
	private: //atributos 
		string nombre;
		int edad;
	public: //metodos 
		Persona(string,int);
		void mostrarPersona();			
};

Persona::Persona(string _nombre, int _edad){
 	nombre = _nombre;
 	edad = _edad;
}

void Persona::mostrarPersona(){
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

class Empleado : public Persona{
	private: //atributos
		float salario;
	public: //metodos
		Empleado(string, int, float);
		void mostrarSalario();
};

Empleado::Empleado(string _nombre, int _edad, float _salario) : Persona(_nombre,_edad){
	salario = _salario;
}

void Empleado::mostrarSalario(){
	mostrarPersona();
	cout << "Salario: " << salario << endl;
}

class Estudiante : public Persona{
	private: //atributos
		int dni;
		float notaFinal;
	public: //metodos
		Estudiante(string, int, int, float);
		void mostrarEstudiante();
};

Estudiante::Estudiante(string _nombre, int _edad, int _dni, float _notaFinal) : Persona(_nombre,_edad){
	dni = _dni;
	notaFinal = _notaFinal;
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout << "DNI: " << dni << endl;
	cout << "Nota Final: " << notaFinal << endl;
}

class Universitario : public Estudiante{
	private: //atributos
		int cantidadMateria;
	public: //metodos
		Universitario(string, int, int, float,int);
		void mostrarUniversitario();
};

Universitario::Universitario(string _nombre, int _edad, int _dni, float _notaFinal, int _cantidadMateria) : Estudiante(_nombre, _edad, _dni, _notaFinal) {
	cantidadMateria = _cantidadMateria;
}

void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	cout << "Cantidad de materias inscritas: " << cantidadMateria << endl;
}

int main(){
	
	Universitario p1("Oren", 20, 29766685, 18.9, 4);
	
	p1.mostrarUniversitario();
	
	return 0;
}