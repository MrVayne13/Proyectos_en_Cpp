#include <iostream>
using namespace std;

int main(){
	
	float prom;
	int n, e, mayor, menor;
	
	mayor = 0;
	menor = n;
	
	for(int i = 0; i < 10; i++){
		cin >> n;
		e += n;
			if (n > mayor){
				mayor = n;
			}else if (n < menor){
				menor = n;
			}
	}
	prom = e / 10;
	
	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es: " << menor << endl;
	cout << "El promedio es: " << prom << endl;
	
	return 0;
}