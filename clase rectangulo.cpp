#include <iostream>
using namespace std;

class Rectangulo{
	private:
		float ancho, largo;
		
	public:
		Rectangulo(float , float);
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(float _ancho, float _largo){
	ancho = _ancho;
	largo = _largo;
	perimetro();
	area();
}

void Rectangulo::perimetro(){
	float peri;
	peri = (ancho * 2) + (largo * 2);
	cout << "El perimetro es: " << peri << endl;
}

void Rectangulo::area(){
	float are;
	are = largo * ancho;
	cout << "El area es: " << are << endl;
}

int main(){
	
	float a, l;
	
	cout << "Ingrese los datos: " << endl;
	cout << "Ancho: "; cin >> a;
	cout << "Largo: "; cin >> l;
	
	Rectangulo r1(a,l);
	
	
	return 0;
}