#include <iostream>
using namespace std;

int main(){
	
	int n, a, b, resultado;
	
	cout << "Ingrese los numeros: " << endl;
	cin >> a; 
	cin >> b;
	
	
	for (int i = 0; i < b; i++){
			resultado += a;
	}
	
	cout << "el resultado es: " << resultado << endl;

	return 0;
}