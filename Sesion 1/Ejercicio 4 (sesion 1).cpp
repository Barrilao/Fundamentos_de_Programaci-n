//Juan Sánchez Rodríguez 

/*Construya un programa para leer el valor de una variable salario_base de tipo
double, la incremente un 2% e imprima el resultado en pantalla. Para realizar este
cómputo, multiplique por 1.02 el valor original. Para resolver este ejercicio tiene varias
alternativas:

	a) Directamente hacer el cómputo 1.02 * salario_base dentro de la sentencia
		cout
	b) Introducir una variable salario_final, asignarle la expresión anterior y mostrar
		su contenido en la sentencia cout
	c) Modificar la variable original salario_base con el resultado de incrementarla
		un 2%.*/
		
#include <iostream>

using namespace std;

int main()
{
	double base, modificador;
	
	cout << "Introduzca su salario para proceder a la subida de sueldo de un 2% ";
	cin >> base;
	
	modificador = 1.02;
	base= base*modificador;
	
	cout << "\nSu salario con un aumento del 2% es igual a " << base;
	
}
