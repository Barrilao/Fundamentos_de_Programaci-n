//Juan S�nchez Rodr�guez 

/*Modifique la soluci�n del ejercicio 8 (a�o bisiesto) para que no se mezclen E/S y C
(entradas/salidas y c�mputos) dentro de la misma estructura condicional.*/

#include <iostream>

using namespace std;

int main()
{
	int anio;
	bool bisiesto=false;
	
	cout << "Introduzca el anio ";
	cin >> anio;
	
	if((anio%4==0&&anio%100!=0)||anio%400==0){
		bisiesto=true;
	}
	
	else{
		bisiesto=false;
	}
	
	if(bisiesto){
		cout << "\nEs bisiesto ";
	}
	
	else{
		cout << "\nNo es bisiesto ";
	}
}
