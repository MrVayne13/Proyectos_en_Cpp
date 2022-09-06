#include <iostream>
using namespace std;

int main(){
	
	int n, m, v, g;
	
	cin >> n;
	cin >> m;
	
	int a[n][m];
	int b[n][m];
	int c[n][m];
	
	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> v; 
			a[i][j] = v;
		}
	}
	
	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> g; 
			b[i][j] = g;
		}
	}
	
	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << " " << c[i][j];
		}
		cout << endl;
	}
	
	return 0;
}