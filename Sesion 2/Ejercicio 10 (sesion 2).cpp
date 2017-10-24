//Juan S�nchez Rodr�guez

/*Realice un programa que lea los coeficientes reales media y desviacion tipica de una funci�n gaussiana.
A continuaci�n el programa leer� un valor de abscisa x y se imprimir� el valor que
toma la funci�n en x*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double media, desviacion, gaussiana, abscisa;
	
	cout << "Introduzca la media ";
	cin >> media;
	cout << "\nIntroduzca la desviacion ";
	cin >> desviacion;
	cout << "\nIntroduzca la abscisa ";
	cin >> abscisa;
	
	gaussiana = (1/(desviacion*sqrt(2*3.1416)))*exp(-0.5*pow((abscisa-media)/desviacion,2));
	
	cout << "\nLa Gaussiana es igual a " << gaussiana;
}
	
