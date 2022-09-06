#include <iostream>
#include <stdlib.h>
using namespace std;

int * iniciar(int n);
int * mezclar(int *a, int *b, int n, int m);
void imprimir(int *a, int n);

int main(){
	
	int n, m;
	
	cout << "ingrese el tamanio del array a: " << endl;
	cin >> n;
	cout << "ingrese el tamanio del array b: " << endl;
	cin >> m;
	
	int *a = iniciar(n);
	int *b = iniciar(m);
	int *c = mezclar(a,b,n,m);
	
	imprimir(c, n + m);
	delete [] a;
	delete [] b;
	delete [] c;
	
	return 0;
}

int * iniciar(int n){
	int x;
	
	int *a = new int[n];
	
	for(int i = 0; i < n; i++){
		cin >> x;
		a[i] = x;
	}
	return a;
}

int * mezclar(int *A, int *B, int n, int m){
	int *C = new int[n + m];
	int k = 0;
	int i = 0;
	int j = m - 1;
		
	while (k < n + m) {
		if (i == n) {
			for (j = j; j >= 0; j--) {
				C[k] = B[j];
				k = k + 1;
			}
		} else if (j == -1) {
			for (i = i; i < n; i++) {
				C[k] = A[i];
				k = k + 1;
				}
			} else {
		if (A[i] <= B[j]) {
				C[k] = A[i];
				i = i + 1;
			} else{
				C[k] = B[j];
				j = j - 1;
			}
				k = k + 1;
			}
		
	}
		return C;
}

void imprimir(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << endl;
}