#include<iostream>
using namespace std;

const int c = 50;

void iniciar(int matriz[][c], int n);
void diagonal(int matriz[][c], int n);
void mostrar(int matriz[][c], int n);

int main(){
	
	int n;
	
	cout << "Ingrese el tamanio de la matriz: " << endl;
	cin >> n;
	
	int matriz[c][c];
	
	iniciar(matriz, n);
	mostrar(matriz,n);
	diagonal(matriz,n);
	
	return 0; 
}

void iniciar(int matriz[][c], int n){
	
	cout << "Ingrese los valores de la matriz: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
}

void mostrar(int matriz[][c], int n){
	cout << "Matriz ingresada: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << matriz[i][j];
		}
		cout << endl;
	}
}

void diagonal(int matriz[][c], int n){
	
	int aux;
		for(int i = 0; i < n; i++){
			for(int j = n-1; j >= 0 ; j--){
				
					aux = matriz[i][i];
					matriz[i][i] = matriz[i][j];
					matriz[i][j] = aux;
				
			}
		}
		mostrar(matriz,n);
}