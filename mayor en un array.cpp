#include <iostream>
using namespace std;

int main(){
	int m, n, e;
	
	cin >> n;
	
	int myArra[n];

	for(int i = 0; i < n; i++){
		cin >> e;
		myArra[i] = e;
	}
	
	m = myArra[0];
	for(int i = 0; i < n; i++){
		if(myArra[i] > m){
			m = myArra[i];
		}
	}
	
	cout << "el mayor es " << m << endl;
	
	
	
	
	
	return 0;
}