//Juan S�nchez Rodr�guez 

/*Un banco presenta la siguiente oferta. Si se deposita una cantidad de euros dada por
la variable capital durante un a�o a plazo fijo, se dar� un inter�s dado por la variable
interes. Realice un programa que lea una cantidad capital y un inter�s interes
desde teclado. A continuaci�n, el programa debe calcular en una variable total el
dinero que se tendr� al cabo de un a�o, aplicando la f�rmula de abajo e imprimir� el
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
