#include<iostream>
using namespace std; 

void rellenar(int a[], int n);
int max(int b[], int e);
void leer(int c[], int r);

int main(){
	
	int n, m, g;
	
	cout << "indique el tamaño del arreglo 1: " << endl;
	cin >> n;
	cout << "indique el tamaño del arreglo 2: " << endl;
	cin >> m;
	
	int a1[n];
	int a2[m];
	
	rellenar(a1,n);
	g = max(a2,m);
	leer(a1,n);
	leer(a2,m);
	
	cout << "El valor maximo del array 2 es: " << g << endl;
	
	return 0;
}

void rellenar(int a[], int n){
	int x = 0;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		a[i] = x;
	}
}

int max(int b[], int e){
	
	rellenar(b,e);
	
	int x = b[0];
	
	for (int i = 0; i < e; i++){
			if(b[i] > x){
				x = b[i];
			}
	}
	return x;
}

void leer(int c[], int r){
	cout << "array [";
	for(int i = 0; i < r; i++){
		cout << c[i];
	}
	cout << "]";
}