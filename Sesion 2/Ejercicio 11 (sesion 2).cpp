//Juan Sánchez Rodríguez

/*Re-escriba las soluciones de los ejercicios 3, 9, 6, 10 (circunferencia, subir sueldo,
diferencia de tiempo, gaussiana) utilizando datos de tipo constante en aquellos sitios
donde considere oportuno.*/

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	//Ejercicio 3
	
	double longitud, area, radio;
	const int pi = 3.1415927 ;
	
	
	cout << "Introduzca el radio de la circunferencia: ";
	cin >> radio;
	
	longitud =  2* pi* radio;
	area = pi * radio *radio;
	
	cout << "\nLa longitud de la circunferencia es igual a "<< longitud << " y el area es " << area;
	
	//Ejercicio 9
	
	double base;
	const int modificador = 1.02;
	const int modificador2 = 1.03;
	
	cout << "\n\n\nIntroduzca su salario para proceder a la subida de sueldo de un 2% ";
	cin >> base;
	
	
	base= base*modificador;
	
	cout << "\nSu salario con un aumento del 2% es igual a " << base;
	
	base=base*modificador2;
	
	cout << "\nSu salario con un aumento del 3% (con la subida del 2%) es igual a " << base;
	
	//Ejercicio 6
	
	int hora1, hora2, minuto1, minuto2, segundo1, segundo2, diferencia;
	const int hora = 3600;
	const int minuto = 60;
	
	cout << "\n\n\nIntroduzca el primer instante ";
	cin >> hora1;
	cin >> minuto1;
	cin >> segundo1;
	
	cout << "\nIntroduzca el segundo instante ";
	cin >> hora2;
	cin >> minuto2;
	cin >> segundo2;
	
	diferencia = (hora2 * hora + minuto2 * minuto + segundo2) - (hora1 * hora + minuto1 * minuto + segundo1);
	
	cout << "\nLa diferencia entre los dos instantes es de " << diferencia << " segundos ";
	
	//Ejercicio 10
	
	double media, desviacion, gaussiana, abscisa; /*Recordamos que la constante "pi" ya la hemos definido en el ejercicio 3*/
	
	cout << "\n\n\nIntroduzca la media ";
	cin >> media;
	cout << "\nIntroduzca la desviacion ";
	cin >> desviacion;
	cout << "\nIntroduzca la abscisa ";
	cin >> abscisa;
	
	gaussiana = (1/(desviacion*sqrt(2*pi)))*exp(-0.5*pow((abscisa-media)/desviacion,2));
	
	cout << "\nLa Gaussiana es igual a " << gaussiana;
	
	
}


