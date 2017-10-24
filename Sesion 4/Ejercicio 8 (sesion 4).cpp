//Juan Sánchez Rodríguez

/*Cree un programa que lea el número de un año e indique si es bisiesto o no. Un año
es bisiesto si es múltiplo de cuatro, pero no de cien. Excepción a la regla anterior son
los múltiplos de cuatrocientos que siempre son bisiestos.*/

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
