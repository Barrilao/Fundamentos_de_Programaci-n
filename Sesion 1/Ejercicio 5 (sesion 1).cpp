//Juan Sánchez Rodríguez 

/*Un banco presenta la siguiente oferta. Si se deposita una cantidad de euros dada por
la variable capital durante un año a plazo fijo, se dará un interés dado por la variable
interes. Realice un programa que lea una cantidad capital y un interés interes
desde teclado. A continuación, el programa debe calcular en una variable total el
dinero que se tendrá al cabo de un año, aplicando la fórmula de abajo e imprimirá el
resultado en pantalla.*/

#include <iostream>

using namespace std;

int main()
{
	double total, capital, interes;
	
	cout << "Introduzca el capital: " ;
	cin >> capital;
	cout << "\nIntroduzca el interes: ";
	cin >> interes;
	
	total= capital+capital*(interes/100);
	
	cout << "\nPor lo tanto vemos que el total es " << total;
	
}
