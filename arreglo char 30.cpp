#include<iostream>
using namespace std;

void iniciar(char cad1[], int n);
int cantidad(char cad1[], int n);
void copiar(char cad1[], char cad2[], int n);
void voltear(char cad[], int n);
void revisar(char cad1[], char cad2[], int n, bool &c);
void minu(char cad[], int n);

int main(){
	
	int n = 30;
	bool palindromo;
	
	char frase[n];
	char fraseInv[n];
	
	iniciar(frase,n);
	minu(frase, n);
	copiar(frase, fraseInv, n);
	voltear(fraseInv,n);
	revisar(frase,fraseInv,n,palindromo);
	
	if(palindromo == true){
		cout << "  Es palindromo." << endl;
	}else{
		cout << "  No es palindromo." << endl;
	}
	
	return 0;
}

void iniciar(char cad1[], int n){
	
	cout << "Ingrese la palabra o Frase: " << endl;
	cin.getline(cad1, n);
}

void minu(char cad[], int n){
	int x = cantidad(cad,n);
	
	for(int i = 0; i < x; i++){
		if(cad[i] >= 65 && cad[i] <= 90){
			cad[i] = cad[i] + 32;
		}
	}
}

int cantidad(char cad1[], int n){
	int cont = 0;
	
	for(int i = 0; cad1[i] != '\0'; i++){
		cont++;
	}
	
	return cont;
}

void copiar(char cad1[], char cad2[], int n){
	int x = cantidad(cad1,n);
	
	for(int i = 0; i < x; i++){
		cad2[i] = cad1[i];
	}
	
}
void voltear(char cad[],int n){
	int aux, x;
	x = cantidad(cad,n);
	
	for(int j = 0; j < x / 2; j++){
		aux = cad[j];
		cad[j] = cad[x - 1 - j];
		cad[x - 1 - j] = aux;
	}
}

void revisar(char cad1[], char cad2[], int n, bool &c){
	int x = cantidad (cad1, n);
	
	c = true;
	for (int i = 0; i <= x; i++){
		if(cad1[i] != cad2[i]){
			c = false;
			break;
		}
	}
}