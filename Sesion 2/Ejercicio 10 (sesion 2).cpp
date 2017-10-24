//Juan Sánchez Rodríguez

/*Realice un programa que lea los coeficientes reales media y desviacion tipica de una función gaussiana.
A continuación el programa leerá un valor de abscisa x y se imprimirá el valor que
toma la función en x*/

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
	
