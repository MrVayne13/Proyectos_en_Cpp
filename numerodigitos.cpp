#include <iostream>
using namespace std; 

int main()
{
	int n, a;
	int cont = 0;
	
	cout << "ingrese el valor de N: " << endl;
	cin >> n;
	
	while (n >= 1)
	{
		n = n / 10;
		cont = cont + 1;
	}
	
	cout << "El numero tiene: " << cont << " digitos" << endl;
	
	return 0;
}