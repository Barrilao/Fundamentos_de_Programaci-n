//Juan Sánchez Rodríguez

/*Recupere la solución del ejercicio 4 (Subir sueldo usando la variable
salario_final) Además de mostrar el salario con la subida del 2% se quiere
mostrar el salario resultante de subirle otro 3% adicional (además de la subida del 2%)
El programa debe mostrar los salarios resultantes de ambas subidas.*/

#include <iostream>

using namespace std;

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
