#include<iostream>
#include<stdlib.h>
using namespace std;

int **iniciar( int n, int m);
void enc(int **matriz, int n, int m);

int main(){
	
	int n, m;
	
	cout << "Ingrese el tamanio de la matriz: " << endl;
	cin >> n;
	cin >> m;
		
	int **matriz = iniciar(n,m);
	enc(matriz, n, m);
	
	
	return 0;
}

int **iniciar(int n, int m){
	int **matriz;
	
	cout << "Ingrese los valores de la matriz [" << n << "]x[" << m << "]" << endl;
	
	matriz = new int*[n];
	for(int i = 0; i < n; i++){
		matriz[i] = new int[m];
		for(int j = 0; j < m; j++){
			cin >> matriz[i][j];
		}
	}
	return matriz;
}

void enc(int **matriz, int n, int m){
	int min, max;
	int i_min, j_min, x_max, y_max;
	
	min = matriz[0][0];
	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(matriz[i][j] <= min){
				min = matriz[i][j];
				i_min = i;		
				j_min = j;
			}
			if(matriz[i][j] >= max){
				max = matriz[i][j];
				x_max =  i;
				y_max = j;
			}
 		}
	}
	cout << "El minimo valor es: " << min << " y se encuentra en la posicion: [" << i_min << "]" << "[" << j_min << "]"<< endl;
	cout << "El maximo valor es: " << max << " y se encuentra en la posicion: [" << x_max << "]" << "[" << y_max << "]"<< endl;
}