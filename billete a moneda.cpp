#include <iostream>
using namespace std;

int main(){
	int dinero;
	int m500 = 0;
	int m100 = 0;
	int m50 = 0;
	int m20 = 0;
	int m10 = 0;
	int rest;
	
	cout << "Ingrese la cantidad de billetes a convertir a monedas: " << endl;
	cin >> dinero;
	
	while (dinero > 0){
		cout << "Su cambio es de: "<< endl;
		
		m500 = m500 + dinero / 500;
		rest = dinero % 500;
		if(m500 != 0){
			cout << m500 << " monedas de 500" << endl;
		}
		
		m100 = m100 + rest / 100;
		rest = rest % 100;
		if(m100 != 0){
			cout << m100 << " monedas de 100" << endl;
		}
		
		m50 = m50 + rest / 50;
		rest = rest % 50;
		if(m50 != 0){
			cout << m50 << " monedas de 50" << endl;
		}
		
		m20 = m20 + rest / 20;
		rest = rest % 20;
		if(m20 != 0){
			cout << m20 << " monedas de 20" << endl;
		}
		
		m10 = m10 + rest / 10;
		if(m10 != 0){
			cout << m10 << " monedas de 10" << endl;
		}
		
		cout << "Ingrese la siguiente cantidad de dinero a convertir a monedas: " << endl;
		cin >> dinero;		
	}	
	
	return 0;
}