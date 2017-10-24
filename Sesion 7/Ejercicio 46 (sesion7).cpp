//Juan Sánchez Rodríguez

/*Construya un programa que lea un valor y calcule su factorial*/

#include <iostream>

using namespace std;

int main()
{
	int valor, operador=1, factorial=0;
	
	cout << "Introduzca el valor ";
	cin >> valor;
	
	for(int i=1;i<=valor;i++){
		operador=operador*i;
		factorial=factorial+operador;
	}
	
	cout << "\nSu factorial es " << factorial;
	
}
