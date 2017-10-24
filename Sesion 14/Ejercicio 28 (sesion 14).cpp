//Juan Sánchez Rodríguez

#include<iostream>;
  
using namespace std;

int main(){
	const int TAMANIO=20;
	int matriz[TAMANIO][TAMANIO];
	int matriz2[TAMANIO][TAMANIO];
	int matriz_producto[TAMANIO][TAMANIO];
	int n_filas,n_columnas, n_columnas2, valor;
	
	cout << "Introduzca el numero de filas de la matriz 1 ";
	cin >> n_filas;
	cout << "\nIntroduzca el numero de columnas de la matriz 1 ";
	cin >> n_columnas;
	cout << "\nIntroduzca el numero de columnas de la matriz 2 ";
	cin >> n_columnas2;
	
	for(int i=0;i<n_filas;i++){
		for(int j=0;j<n_columnas;j++){
			cout << "\nIntroduzca el valor de la matriz 1 en la posicion " << i+1 << j+1 << " ";
			cin >> valor;
			matriz[i][j]=valor;
		}
	}
	
	for(int i=0;i<n_columnas;i++){
		for(int j=0;j<n_columnas2;j++){
			cout << "\nIntroduzca el valor de la matriz 2 en la posicion " << i+1 << j+1 << " ";
			cin >> valor;
			matriz2[i][j]=valor;
		}
	}
	
	for(int i=0;i<n_filas;i++){
		for(int j=0;j<n_columnas2;j++){
			matriz_producto[i][j]=0;
			for(int k=0;k<n_columnas;k++){
				matriz_producto[i][j]=matriz_producto[i][j]+matriz[i][k]*matriz2[k][j];
			}
			
		}
	}
	
	cout << "\nLa matriz multiplicada es\n";
	for(int i=0;i<n_filas;i++){
		cout << "\n\n ";
		for(int j=0;j<n_columnas2;j++){
			cout << matriz_producto[i][j] << " ";
		}
	}
	
}
