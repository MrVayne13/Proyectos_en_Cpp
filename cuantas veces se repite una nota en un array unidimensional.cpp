#include <iostream>
using namespace std;

void iniciar();
void cantidad();

float *notas; 
int numNotas, x;

int main(){
	
	iniciar();
	cantidad();
	
	
	return 0;
}

void iniciar(){
	cout << "ingrese el numero de notas: " << endl;
	cin >> numNotas;
	notas = new float[numNotas];
	for(int i = 0; i < numNotas; i++){
		cin >> notas[i];
	}
}

void cantidad(){
	int count = 0;
	cout << "Ingrese la nota que desea verificar si se repite: "<< endl;
	cin >> x;
	
	for(int i = 0; i < numNotas; i++){
		if(notas[i] == x){
			count = count + 1;
		}
	}
	cout << "El numero de veces que se repite la nota ingresada es: " << count << endl;
}