#include<iostream>
#include<stdlib.h>

using namespace std;

void iniciar(int *arreglo,int n);
void ordenar(int *arreglo, int n);

int main(){
	
	int n; 
	
	cout << "Ingrese el tamanio del arreglo: " << endl;
	cin >> n;
	
	int arreglo[n];
	
	iniciar(arreglo,n);
	ordenar(arreglo,n);
	
	cout << "arreglo ordenado por seleccion directa: " << endl;
	
	for(int i = 0; i < n; i++){
		cout << "[" << arreglo[i] << "]";
	}
	
	return 0;
}

void iniciar(int *arreglo, int n){
	
	int x;
	
	cout << "Ingrese los valores del arreglo: " << endl;
	
	for(int i = 0; i < n; i++){
		cin >> arreglo[i];
	}
	
	cout << "arreglo sin ordenar: " << endl;
	
	for(int i = 0; i < n; i++){
		cout << "[" << arreglo[i] << "]";
	}
	cout << endl;
}

void ordenar(int *arreglo, int n){
	
	int i, j, max, k;
	
	for(int i = 0; i < n; i++){
		k = i;
		max = arreglo[i];
		for(j = i+1;j < n; j++){
			if(arreglo[j] >= max){
				max = arreglo[j];
				k = j;
			}
		}
		arreglo [k] = arreglo[i];
		arreglo[i] = max; 
	}
}