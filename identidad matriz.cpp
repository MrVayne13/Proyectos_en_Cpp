#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	int m[n][n];
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if(m[i] == m[j]){
				m[i][j] = 1;
			}else{
				m[i][j] = 0;
			}
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << m[i][j];
		}
		cout << endl;
	}
	
	
	
	return 0;
}