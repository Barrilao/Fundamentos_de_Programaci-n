//Juan S�nchez Rodr�guez

/*En el ejercicio 13 de la Relaci�n de Problemas I se ped�a escribir un programa que
leyese un valor entero de tres d�gitos e imprimiese los d�gitos separados por un espacio
en blanco. Haga lo mismo pero para un n�mero entero arbitrario. */

#include <iostream>

using namespace std; 

int main(){
	int numero, copia, potencia, longitud, digito, contador=0;
	
	cout << "Introduzca el numero a separar ";
	cin >> numero;
	
	longitud=1;
	potencia=1;
	copia=numero;
	
	do{
		copia=copia/10;
		longitud++;
		potencia=potencia*10;
	}while(copia>=10);
	
	copia=numero;
	
	do{
		digito=copia/potencia;
		cout << digito << " ";
		copia=copia%potencia;
		potencia=potencia/10;
		contador++;
	}while(contador<longitud);
	
}
