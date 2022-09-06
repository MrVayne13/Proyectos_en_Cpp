#include <iostream>
using namespace std;
	
	int factorial(int a);
	
int main(){
	
	int n, b;
	
	cout << "Ingrese el numero: " << endl;
	cin >> n;
	
 	b = factorial(n);
	
	cout << "El factorial del numero ingresado es: " << b << endl;
	
	return 0;
}

int factorial(int a){
	
	int b;
	
	b = 1;
	
	for(int i = 1; i <= a; i++){
		b = b * i;
	}
	
	return b;
}