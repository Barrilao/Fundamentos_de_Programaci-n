//Juan S�nchez Rodr�guez

/*Cree un programa que lea el n�mero de un a�o e indique si es bisiesto o no. Un a�o
es bisiesto si es m�ltiplo de cuatro, pero no de cien. Excepci�n a la regla anterior son
los m�ltiplos de cuatrocientos que siempre son bisiestos.*/

#include <iostream>

using namespace std;

int main()
{
	int anio;
	
	cout << "Introduzca el anio ";
	cin >> anio;
	
	if((anio%4==0&&anio%100!=0)||anio%400==0){
		cout << "\nEs bisiesto ";
	}
	
	else{
		cout << "\nNo es bisiesto ";
	}
	
}
