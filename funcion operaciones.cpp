#include <iostream>
using namespace std;

int resolver(char tipo, int e, int r);
int mult(int a, int b);
int divi(int a, int b);
int expo(int a, int b);
void max(int &a, int &b);
int mcm(int a, int b);
int mcd(int a, int b);

int main(){
	char opera;
	int a, b, resul;
	
	cout << "Ingrese un numero: " << endl;
	cin >> a;
	cout << "Ingrese un numero: " << endl;
	cin >> b;
	cout << "Que operacion desea hacer? " << endl;
	cout << " suma = '+' \n resta = '-' \n multiplicacion = '*' \n cociente = '/' \n minimo comun multiplo = 'm' \n maximo como un divisor = 'd' \n exponencial = '^' \n";
	cin >> opera;

	if (opera == '+' || opera == '-' || opera == '*' || opera == '/' || opera == 'm' || opera == 'd' || opera == '^') {
	while(opera != 't'){
		resul = resolver(opera,a,b);
		cout << "El resultado de la operacion es: " << resul << endl;
		
		cout << "Ingrese un numero: " << endl;
		cin >> a;
		cout << "Ingrese un numero: " << endl;
		cin >> b;
		cout << "Que otra operacion desea hacer? " << endl;
		cout << " suma = '+' \n resta = '-' \n multiplicacion = '*' \n cociente = '/' \n minimo comun multiplo = 'm' \n maximo comun divisor = 'd' \n exponencial = '^' \n";
		cin >> opera;
	}
}else if(opera == 't'){
	cout << "Programa finalizado." << endl;
	return 0;
}
	return 0;
}

int resolver(char tipo, int e, int r){
	int b;
	switch(tipo){
		case '+':
			b = e + r;
			break;
		case '-':
			b = e - r;
			break;
		case '*':
			b = mult(e,r);
			break;
		case '/':
			b = divi(e,r);
			break;
		case 'm':
			b = mcm(e,r);
			break;
		case 'd':
			b = mcd(e,r);
			break;
		case '^':
			b = expo(e,r);
			break;
	}
	return b;
}

int mult(int a, int b){
	int x = 0;
	for (int i = 0; i < b; i++){
		x = x + a;
	}
	return x;
}
 
int divi(int a, int b){
	int cociente = 0;
	while(a >= b){
		a = a - b;
		cociente = cociente + 1;
	}
	return cociente;
}

void max(int &a, int &b){
	int m;
	 	if(a < b){
	 		m = b;
	 		b = a;
	 		a = m;
		 }
}

int mcd(int a, int b){
	int mcd = 0;
	
	max(a,b);
	
	while(b != 0){
		mcd = b;
		b = a % b;
		a = mcd;
	}
	return mcd;
}

int mcm(int a, int b){
	int mcm = 0;
	mcm = (a/mcd(a,b))*b;
	return mcm;
}

int expo(int a, int b){
	int x = 1;
	for (int i = 0; i < b; i++){
		x = x * a;
	}
	return x; 
}
