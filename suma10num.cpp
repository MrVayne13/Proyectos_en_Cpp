#include <iostream>
using namespace std;

int main(){
	int n, suma;
	
	for (int i = 0; i < 10; i++){
		cin >> n;
			if(n % 4 == 0){
				n = n - n;
			}	
		suma += n;
	}
	
	cout << "la suma de los numeros ingresados es: " << suma << endl;
	
	return 0;
}