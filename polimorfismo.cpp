#include <iostream>
using namespace std;

class Animal{
	private: 
		string comida;
	public:
		Animal(string);
		virtual void Comer();
};

class Humano : public Animal{
	private:
		string nombre;
		int anios;
	public: 
		Humano(string,string,int);
		void Comer();
};

class Perro : public Animal{
	private:
		string raza;
	public: 
		Perro(string,string);
		void Comer();
};

Animal::Animal(string _comida){
	comida = _comida;
}

Humano::Humano(string _comida, string _nombre, int _anios) : Animal(_comida){
	nombre = _nombre;
	anios = _anios;
}

Perro::Perro(string _comida, string _raza) : Animal(_comida){
	raza = _raza;
}

void Animal::Comer(){
	cout << "Comida: " << comida << endl;
}

void Humano::Comer(){
	cout << "Nombre: " << nombre << "\nAnios:" << anios << "\n";
	Animal::Comer();
}

void Perro::Comer(){
	Animal::Comer();
	cout << "Raza: " << raza << endl;
}

int main(){
	
	Animal *vector[3];
	
	vector[0] = new Humano("Hamburguesa", "Oren", 20);
	
	vector[0]->Comer();
	
	cout << "\n-Perro-" <<endl;
	
	vector[1] = new Perro("Perrarina", "Snowzer");
	
	vector[1]->Comer();
	
	return 0;
}