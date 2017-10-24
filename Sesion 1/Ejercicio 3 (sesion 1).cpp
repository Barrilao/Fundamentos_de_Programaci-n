//Juan Sánchez Rodríguez 

/*Cree un programa que nos pida la longitud del radio y calcule el área del círculo y la
longitud de la circunferencia correspondientes.*/

#include <iostream>

using namespace std;

int main()
{
	double longitud, area, radio;
	
	cout << "Introduzca el radio de la circunferencia: ";
	cin >> radio;
	
	longitud =  2* 3.1415927 * radio;
	area = 3.1415927 * radio *radio;
	
	cout << "\nLa longitud de la circunferencia es igual a "<< longitud << " y el area es " << area;
	
}

int main()
{
	double base, modificador, modificador2;
	
	cout << "Introduzca su salario para proceder a la subida de sueldo de un 2% ";
	cin >> base;
	
	modificador = 1.02;
	modificador2 = 1.03;
	base= base*modificador;
	
	cout << "\nSu salario con un aumento del 2% es igual a " << base;
	
	base=base*modificador2;
	
	cout << "\nSu salario con un aumento del 3% (con la subida del 2%) es igual a " << base;

}


