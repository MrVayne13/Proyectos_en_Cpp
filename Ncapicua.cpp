#include <iostream>
using namespace std;

int main()
{
	int num, y, x;

	
	cout << "Ingrese el numero que desea verificar si es Capicua: " << endl;
	cin >> num;
	
	x = num; 
	
		while (x != 0)
		{
			y = y * 10 + x % 10;
			x = x / 10;
		} 
	
		if (num == y){
			cout << "El numero ingresado es capicua"<< endl;
		}else 
		{
			cout << "El numero ingresado no es capicua" << endl;
		}
	
	return 0;
}