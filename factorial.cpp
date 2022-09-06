#include <iostream>
using namespace std;

int main(){
	
	int n;
	int facto;
	
	cout << "ingrese el numero: " << endl;
	cin >> n;
	
	while(n != 0){
		facto = 1;
		for (int i = 1; i <= n; i++){
			facto = facto * i;
		}
	cout << "El factorial del numero ingresado es: " << facto << endl;
	
	cout << "Ingrese el siguiente numero: " << endl;
	cin >> n;	
	}
	
	return 0;
}