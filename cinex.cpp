#include<iostream>
#include<string>
using namespace std;

const int filas = 15, columnas = 7, maxColum = 100;
void iniciar(int peliculasXsalas[][maxColum], int filas, int columnas, string salas[], string peliculas[]);
int mejor(int peliculasXsalas[][maxColum], int filas, int columnas, int &iPos, int &jPos);
int vista(int peliculasXsalas[][maxColum], int filas, int columnas, int &iPos);

int main(){
	
	int iPos, jPos;
	int peliculasXsalas[maxColum][maxColum];
	
	string salas[columnas] = {"Sala 1", "Sala 2", "Sala 3", "Sala 4", "Sala 5", "Sala 6", "Sala 7"};
	
	string peliculas[filas] = {"Animales Fantasticos 2", "Aquaman", "Bumblebee", "Colette", "El Grinch", "El Regreso de Mary Poppins", "El Tercer Deseo",
"Spider-man un nuevo universo", "Venezuela es un Desorden", "Wifi Ralph","Como Entrenar a tu Dragon 3", "La gran aventura lego 2",
"Feliz dia de tu muerte 2", "Las Dos Reinas", "Capitana Marvel"};
	
	iniciar(peliculasXsalas,filas,columnas,salas,peliculas);
	
	int mjr = mejor(peliculasXsalas, filas, columnas, iPos, jPos);
	cout << "La mejor combinacion es: " << peliculas[iPos] << " en la " << salas[jPos] << endl;
	
	int masVista = vista(peliculasXsalas, filas, columnas, iPos);
	cout << "La pelicula mas vista es: " << peliculas[iPos] << endl;
	
	return 0;
}

void iniciar(int peliculasXsalas[][maxColum], int filas, int columnas, string salas[], string peliculas[]){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout << "Ingrese el valor de la entrada: [" << peliculas[i] << "] [" << salas[j] << "]" << endl;
			cin >> peliculasXsalas[i][j];
		}
	}
}

int mejor(int peliculasXsalas[][maxColum], int filas, int columnas, int &iPos, int &jPos){
	
	iPos = 0;
	jPos = 0;
	int max = peliculasXsalas[iPos][jPos];
	for(int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			if (peliculasXsalas[i][j] >= max){
				iPos = i;
				jPos = j;
				max = peliculasXsalas[i][j];
			}
		}
	}
	return max;
}

int vista(int peliculasXsalas[][maxColum], int filas, int columnas, int &iPos){
	int sumaMax = -1;
	iPos = -1;
	
	int suma;
	
	for(int i = 0; i < filas; i++){
		suma = 0;
		for(int j = 0; j < columnas; j++){
			suma = suma + peliculasXsalas[i][j];
			if (suma > sumaMax){
				sumaMax = suma;
				iPos = i;
			}
		}
	}
	return sumaMax;
	
}