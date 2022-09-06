#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

const int MAX = 1000;

struct precio{
	string producto;
	string nombre;
	float precio;
};

void lectura(string texto, precio &p);
void strcpy(char A[], string B, int length);
int strlen(string A);

int main(){
	precio precios[20];
	
	ifstream F;
	string texto;
	int i = 0;

	F.open("precios.txt", ios::in);
	
	if(F.fail()){
		cout << "No se pudo abrir el archivo. " << endl;
		exit(1);
	}
	
	while(!F.eof()){
		getline(F,texto);
		lectura (texto, precios[i]);
		i++; 
	}
	
	F.close();
	
	return 0;
}

void lectura(string texto, precio &p){
	
	int length = 0, i = 0, campo = 0;
		while (true) {
			char y[MAX];
				if (texto[i] == ' ' || texto[i] == '\n') {
				strcpy(y, texto, length);
				i = 0;
				length = 0;
					if (campo == 0) {
					p.producto = y;
					} else if (campo == 1) {
					p.nombre = y;
					} else {
					p.precio = atof(y);
				}
			campo++;
			if (campo == 3) {
			break;
			}
		}
		i++;
		length++;
	}
	
}

void strcpy(char A[], string B, int length) {
	for (int i = 0; i < length; i++) {
		A[i] = B[i];
	}
		A[length] = '\0';
	
	int lengthB = strlen(B);
		int k = 0;
			for (int i = length + 1; i <= lengthB; i++) {
			B[k] = B[i];
			if (B[i] == '\0') {
		break;
		}
		k++;
	}
}

int strlen(string A){
	int max = 1;
	for(int i = 0; A[i] != '\0'; i++){
		max++;
	}
	return max;
}