#include<iostream>
using namespace std;

int main(){
	
	int n, f;
	
	cout << "ingrese el numero: " << endl;
	cin >> n;
	
	while(n != 0){
		f = f * 10 + n % 10;
		n = n / 10;
	}
	
	cout << "El numero invertido es: " << f << endl;
	
	
	return 0;
}