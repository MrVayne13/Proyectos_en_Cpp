#include <iostream>
using namespace std;

class Persona{
	private:
		string nombre;
		int ci;							//Clase principal
	public:
		Persona(string,int);
		virtual void mostrar();
};

class Estudiante : public Persona{
	private:
		float notaParcial;
	public:										//Subclase de Persona
		Estudiante(string,int,float);
		void mostrar();
};

class Profesor : public Persona{
	private:
		string materia;
	public:										//Subclase de Persona
		Profesor(string,int,string);
		void mostrar();
};

class Preparador : public Persona{
	private:
		string materia;
	public:											//Subclase de Persona
		Preparador(string,int,string);
		void mostrar();
};

class Seccion {
	private: 
		string num_seccion;
	public:
		Seccion(string);
		void mostrar();	
};

Persona::Persona(string _nombre, int _ci){
	nombre = _nombre;
	ci = _ci;
}

Estudiante::Estudiante(string _nombre, int _ci, float _notaParcial) : Persona(_nombre,_ci){
	notaParcial = _notaParcial;
}

Profesor::Profesor(string _nombre, int _ci, string _materia) : Persona(_nombre,_ci){
	materia = _materia;
}

Preparador::Preparador(string _nombre, int _ci, string _materia) : Persona(_nombre,_ci){
	materia = _materia;
}

Seccion::Seccion(string _num_seccion){
	num_seccion = _num_seccion;
}

void Persona::mostrar(){
	cout << "Nombre: " << nombre << endl;
	cout << "C.I: " << ci << endl;
}

void Estudiante::mostrar(){
	cout << "\n-Estudiante-" << endl;
	Persona::mostrar();
	cout << "Notas estudiante: " << notaParcial << endl;
}

void Profesor::mostrar(){
	cout << "\n-Profesor-" << endl;
	Persona::mostrar();
	cout << "Materia: " << materia << endl;
}

void Preparador::mostrar(){
	cout << "\n-Preparador-" << endl;
	Persona::mostrar();
	cout << "Materia: " << materia << endl;
}
void Seccion::mostrar(){
	cout << "Seccion: " << num_seccion << endl;
}

int main(){
	
	int seleccion;
	string n, m, s;
	int c;
	float nota;
	
	cout << "Ingrese los datos que desea guardar: " << endl;
	cout << "1.- Estudiante \n2.- Preparador \n3.- Profesor" << endl;
	cin >> seleccion;
	
	if(seleccion == 1){
			cout << "ingrese los datos del estudiante: " << endl;
			cout << "Nombre: "; cin >> n;
			cout << "C.I: "; cin >> c;
			cout << "Notas estudiante: "; cin >> nota;
			cout << "Seccion: "; cin >> s;
			Estudiante e1(n,c,nota);
			e1.mostrar();
			Seccion s1(s);
			s1.mostrar();
	}if(seleccion == 2){	
			cout << "ingrese los datos del Preparador: " << endl;
			cout << "Nombre: "; cin >> n;
			cout << "C.I: "; cin >> c;
			cout << "Materia: "; cin >> m;
			cout << "Seccion: "; cin >> s;
			Preparador p1(n,c,m);
			p1.mostrar();
			Seccion s2(s);
			s2.mostrar();
	}else if(seleccion == 3){
			cout << "Ingrese los datos del Profesor: " << endl;
			cout << "Nombre: "; cin >> n;
			cout << "C.I: "; cin >> c;
			cout << "Materia: "; cin >> m;
			cout << "Seccion: "; cin >> s;
			Profesor p3(n,c,m);
			p3.mostrar();
			Seccion s3(s);
			s3.mostrar();	
	}
	
	return 0;
}