#include <iostream>
using namespace std;

const int f = 100; 
const int c = 50;

void iniciar(float matriz[][c], int f, int c);
void suma(float matriz [][c], float result[], int f, int c);
void mostrar(float result[], int c);
	
int main(){
	int filas, columnas;
	
	cout << "Ingrese el tamanio de la matriz" << endl;
	cin >> filas >> columnas;
	
	float matriz[f][c];
	iniciar(matriz, filas,columnas);
	
	float result[columnas];
	
	suma(matriz, result, filas,columnas);
	mostrar(result, columnas);
	
	return 0;
}

void iniciar(float matriz[][c], int f, int c){

	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cin >> matriz[i][j];
		}
	}
}

void suma(float matriz [][c], float result[], int f, int c){
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			result[i] = result[i] + matriz[j][i];
		}
	}
}

void mostrar(float result[], int c){
	for(int i = 0; i < c; i++){
		cout << "[" << result[i] << "]" ;
	}
}