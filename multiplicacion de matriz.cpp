#include<iostream>
#include<stdlib.h>
using namespace std;

int ** iniciar( int b, int c);
int ** multi(int **a, int **b, int c, int h,int f);
void imprimir(int **a, int b, int c);

int main(){
	
	int nFilasA, nColA, nFilasB, nColB;
	
	cout << "Ingrese el tamanio de la matriz A: " << endl;
	cin >> nFilasA;
	cin >> nColA;
	
	cout << "Ingrese el tamanio de la matriz B: " << endl;
	cin >> nFilasB;
	cin >> nColB;
	
	int **A = iniciar(nFilasA, nColA);
	int **B = iniciar(nFilasB, nColB);
	int **C = multi(A, B, nFilasA, nColA, nColB);
	imprimir(C,nFilasA,nColB);
	
	for(int i = 0; i < nFilasA; i++){
		delete [] A;
	}
	delete A;
	
	for(int i = 0; i < nFilasB; i++){
		delete [] B;
	}
	delete B;
	
	for(int i = 0; i < nFilasA; i++){
		delete [] C;
	}
	delete [] C;
	
	return 0;
}

int ** iniciar(int b, int c){
	
	int x;
	int **A;
	
	cout << "Ingrese los datos de la matriz: " << endl;
	A = new int*[b];
		for(int i = 0; i < b; i++){        
			A[i] = new int[c];
			for (int j = 0; j < c; j++){
			cin >> A[i][j];
		}
	}
	return A;
}

int ** multi(int **a, int **b, int c, int h ,int f){
	int **G;
	int i, j, k;
	 
	G = new int*[c];
	for(i = 0; i < c; ++i){
		G[i] = new int[f];
		for(j = 0; j < f; ++j){
			G[i][j] = 0;
			for(k = 0; k < h; ++k){
			G[i][j] += a[i][k] * b[k][j];
			}
		}
	} 
	return G;
}

void imprimir(int **a, int b, int c){
	for(int i = 0; i < b; i++){
		for (int j = 0; j < c; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}