#include <iostream>
using namespace std;

int main(){
	
	int n, suma, v, aux;
	
	cin >> n;
	
	int a[n];
	int b[n];
	
	for (int i = 0; i < n; i++){
		cin >> v;
		a[i] = v;
	}
	
	for(int i = 0; i < n; i++){
			b[i] = aux + a[i];
			aux = b[i];
			cout << "La suma parcial de los elementos de a en b es: " << b[i] << endl;
	}

	
	return 0;
}