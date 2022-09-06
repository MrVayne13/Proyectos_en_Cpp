#include<iostream>
#include<stdlib.h>

using namespace std;

int **iniciar(int n);
void conversion(int **matriz,int *arreglo, int n, int arregloTam, bool &esMagi);

int main(){
	
	int n;
	bool esMagi;
	
	cout << "Ingrese el tamanio de la matriz: " << endl; 
	cin >> n;
	
	int *arreglo;
	int t = 2*n+2;
	 arreglo = new int[t];
	
	int **A = iniciar(n);
	conversion(A, arreglo, n, t, esMagi);
	
	if(esMagi == true){
		cout << "La matriz es magica y la suma es: " << arreglo[0] << endl;
	}else{
		cout << "La matriz no es magica y la suma es: " << endl;
		for(int i = 0; i < t; i++){
			cout << "[" << arreglo[i] << "]";
		}
	}
	
	for(int j = 0; j < n; j++){
		delete [] A[j];
	}
	delete [] A;
	
	delete [] arreglo;
	
	return 0;
}

int **iniciar(int n){
	
	int **matriz;
	
	cout << "Ingrese los datos de la matriz: " << endl;
	
	matriz = new int*[n];
	for(int i = 0; i < n; i++){
		matriz[i] = new int[n];
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
	return matriz;
}

void conversion(int **matriz, int *arreglo, int n, int arregloTam, bool &esMagi ){
	
	int i, j, k, suma;
	 for(int k = 0; k < arregloTam; k++){
	 	arreglo[k] = 0;
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			arreglo[i] += matriz [i][j];
			arreglo[i+n] += matriz [j][i];
				if(i == j){
					arreglo[2*n] += matriz[j][i];
				}
				if(i+j == n-1){
					arreglo[2*n+1] += matriz[j][i];
			}
		}
	}
	suma = arreglo[0];
	esMagi = true;
	for(int i = 1; i < arregloTam; i++){
		if(suma != arreglo[i]){
			esMagi = false;
			break;
		}
	}
}