#include<iostream>
using namespace std;

void max(int &a, int &b);
int mcm(int a, int b);
int mcd(int a, int b);

int main(){
	
	int j, p, k, y;
	int x = 0;
	
	cout << "Ingrese cada cuanto va a saltar Juan: " << endl;
	cin >> j;
	cout << "Ingrese cada cuanto va a saltar Pedro: " << endl;
	cin >> p;
	cout << "Ingrese hasta cuanto va a saltar juan: " << endl;
	cin >> k;
	
	if(j == p){
		x = x - 1;
	}else{
		y = mcm(j,p);
		if(y > 0 && y < j * p){
			x = 1;
		}
	}
	
	switch(x){
		case 1:
			cout << "Si hay encuentro" << endl;
			break;
		case 0: 
			cout << "No hay encuentro" << endl;
			break;
		case -1:
			cout << "Error. Los valores ingresados no pueden coincidir" << endl;
			break;
	}
	
	return 0;
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
	
	do{
		mcd = b;
		b = a % b;
		a = mcd;
	}while(b != 0);
	return mcd;
}

int mcm(int a, int b){
	int mcm = 0;
	mcm = (a * b) / mcd(a, b);
	return mcm;
}