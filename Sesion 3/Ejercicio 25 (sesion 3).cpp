//Juan Sánchez Rodríguez

/*Construya un programa que lea un carácter (supondremos que el usuario introduce
una mayúscula), lo pase a minúscula y lo imprima en pantalla. Hágalo sin usar las
funciones toupper ni tolower de la biblioteca cctype. Para ello, debe considerarse
la relación que hay en C++ entre los tipos enteros y caracteres*/

#include <iostream>

using namespace std;

int main(){
	char letra;
	
	cout << "Introduzca la letra mayuscula ";
	cin >> letra;
	
	letra = letra + ('a'-'A');
	
	cout << "\nSu letra minuscula es " << letra;
	
}
