#include <iostream>
using namespace std;

int main()
{
	int num;
	int var_prim;
 	int var_fin;
 	int var1;
 	int var2;
 	int var3;
 	int var4;
 
 	cout << "ingrese el numero: " << endl;
 	cin >> num;
 	
 	var_prim = num / 100;
 	var_fin = num % 100;
 	
	var1 = num / 1000;
 	var2 = num % 1000 / 100;
 	var3 = num % 100 / 10; 
 	var4 = num % 10;
 
 	
 	if ((var_prim > var_fin) && (var1 < var2) && (var2 < var3) && (var3 < var4))
 		{
 			cout << "es muy feliz" << endl;
		 }else if (var_prim > var_fin)
		 {
		 	cout << "es feliz" << endl;
		 }else if((var1 < var2) && (var2 < var3) && (var3 < var4))
		 {
		 	cout << "es creciente" << endl;
		 }else 
		 {
		 	cout << " es infeliz" << endl;
		 }
	
	
 	
 	
 	
 	return 0;
}