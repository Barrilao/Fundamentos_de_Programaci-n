//Juan S�nchez Rodr�guez

/*Construya un programa que lea un car�cter (supondremos que el usuario introduce
una may�scula), lo pase a min�scula y lo imprima en pantalla. H�galo sin usar las
funciones toupper ni tolower de la biblioteca cctype. Para ello, debe considerarse
la relaci�n que hay en C++ entre los tipos enteros y caracteres*/

#include <iostream>

using namespace std;

int main(){
	char letra;
	
	cout << "Introduzca la letra mayuscula ";
	cin >> letra;
	
	letra = letra + ('a'-'A');
	
	cout << "\nSu letra minuscula es " << letra;
	
}
