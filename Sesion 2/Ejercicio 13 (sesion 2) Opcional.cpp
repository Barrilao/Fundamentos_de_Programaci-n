//Juan S�nchez Rodr�guez

/*Escriba un programa que lea un valor entero e imprima en pantalla cada uno de sus
d�gitos separados por dos espacios en blanco. Supondremos que el usuario introduce
siempre un entero de tres d�gitos*/

#include <iostream>

using namespace std;

int main()
{
	int numero, centena, decena, unidad;
	
	cout << "Introduzca el numero de tres cifras a separar ";
	cin >> numero;
	
	centena = numero/100;
	decena = (numero/10)%10;
	unidad = numero%10;
	
	cout << "\nEl numero separado es: " << centena << "  " << decena << "  " << unidad;
	
}
