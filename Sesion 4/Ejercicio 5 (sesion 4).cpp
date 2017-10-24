//Juan Sánchez Rodríguez 

/*Queremos gestionar la nómina de los empleados de un centro de atención telefónica.
Construya un programa que lea el salario por hora (dato de tipo real) de un empleado,
el número de horas trabajadas durante el mes actual (dato de tipo entero) el número
de casos resueltos de forma satisfactoria (dato de tipo entero) y el grado medio de
satisfacción de los usuarios de los servicios telefónicos con el empleado en cuestión
(real entre 0 y 5).

Se aplicará una subida del 4% a los empleados que han resuelto más de 30 casos.*/


#include <iostream>

using namespace std;

int main()
{
	double salario, satisfaccion;;
	int horas, casos;
	
	cout << "Introduzca, en el siguiente orden, sus siguientes datos: salario por hora, horas al mes, casos resueltos y el grado medio de satisfaccion ";
	cin >> salario;
	cin >> horas;
	cin >> casos;
	cin >> satisfaccion;
	
	salario = salario*horas;
	
	if(casos>30){
		salario=salario+(salario*4/100);
	}
	
	cout << "\nSu salario queda como " << salario;
	
}
