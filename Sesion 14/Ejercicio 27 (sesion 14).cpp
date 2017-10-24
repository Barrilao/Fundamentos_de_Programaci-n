//Juan Sánchez Rodríguez

#include <iostream>

using namespace std;

int main(){
	int numero, n_filas, n_columnas;
	const int TAMANIO=50;
	int matriz[TAMANIO][TAMANIO];
	int transpuesta[TAMANIO][TAMANIO];
	
	cout << "Introduzca el numero de filas ";
	cin >> n_filas;
	cout << "\nIntroduzca el numero de columnas ";
	cin >> n_columnas;
	
	for(int i=0;i<n_filas;i++){
		for(int j=0;j<n_columnas;j++){
			cout << "\nIntroduzca el valor de la posicion " << i+1 << j+1 << " ";
			cin >> numero;
			matriz[i][j]=numero;
		}
	}
	
	for(int i=0;i<n_columnas;i++){
		for(int j=0;j<n_filas;j++){
			transpuesta[i][j]=matriz[j][i];
		}
	}
	
	cout << "\nLa matriz original es la siguiente:";
	
	for(int i=0;i<n_filas;i++){
		cout << "\n\n";
		for(int j=0;j<n_columnas;j++){
			cout << matriz[i][j] << " ";
		}
	}
	
	cout << "\nLa matriz transpuesta es:";
	
	for(int i=0;i<n_columnas;i++){
		cout << "\n\n";
		for(int j=0;j<n_filas;j++){
			cout << transpuesta[i][j] << " ";
		}
	}
}
