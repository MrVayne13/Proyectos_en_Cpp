#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void iniciar(char cad[], int n);

int main(){
	
	int n = 10;
	bool igual;
	int letMin, letMay, digi;
	
	char cadena1[n];
	char cadena2[n];
	char cadena3[n];
	
	iniciar(cadena1, n);
	iniciar(cadena2, n);
	
	if (strcmp(cadena1, cadena2) == 0){
		strcpy(cadena3, cadena1);
		strlwr(cadena3);
		cout << "ambas cadenas son iguales. " << endl;
		for(int i = 0; i < n; i++){
			cout << cadena3[i];
		}
	}else{
		
	}
	
	
	return 0;
}

void iniciar(char cad[], int n){
	cout << "ingrese los caracteres: " << endl;
	for(int i = 0; i < n; i++){
		cin >> cad[i];
	}
}