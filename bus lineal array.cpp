#include<iostream>
#include<stdlib.h>
using namespace std;

void iniciar(int arreglo[], int n);
void ordenar(int arreglo[], int n);
void busLin(int arreglo[], int n, int x, bool &s);


int main(){
	
	int arreglo[10];
	int x;
	bool s;
	
	iniciar(arreglo,10);
	ordenar(arreglo,10);
	
	cout << "Que numero desea buscar: " << endl;
	cin >> x;
	
	busLin(arreglo,10,x,s);
	
	if (s == false){
		cout << "El numero no se encuentra en el arreglo." << endl;
	}
	
	return 0;
}

void iniciar (int arreglo[], int n){
	
	cout << "Digite los 10 numeros para el arreglo: " << endl;
	
	for(int i = 0; i < n; i++){
		cin >> arreglo[i];
	}
}

void ordenar(int arreglo[], int n){
	int min, k;
	
	for(int i = 0; i < n; i++){
		k = i;
		min = arreglo[i];
		for(int j = i+1; j < n; j++){
			if (arreglo[j] <= min){
				min = arreglo[j];
				k = j;
			}
		}
		arreglo[k] = arreglo [i];
		arreglo[i] = min;
	}
}

void busLin(int arreglo[], int n, int x, bool &s){
	
	s = true;
	
	for(int i = 0; i < n; i++){
		if(arreglo[i] == x){
			cout << "El numero se encuentra en la posicion: [" << i << "]" << endl;
		}else{
			s = false;
		}
	}
}