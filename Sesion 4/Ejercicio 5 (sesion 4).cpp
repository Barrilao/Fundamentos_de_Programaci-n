//Juan S�nchez Rodr�guez 

/*Queremos gestionar la n�mina de los empleados de un centro de atenci�n telef�nica.
Construya un programa que lea el salario por hora (dato de tipo real) de un empleado,
el n�mero de horas trabajadas durante el mes actual (dato de tipo entero) el n�mero
de casos resueltos de forma satisfactoria (dato de tipo entero) y el grado medio de
satisfacci�n de los usuarios de los servicios telef�nicos con el empleado en cuesti�n
(real entre 0 y 5).

Se aplicar� una subida del 4% a los empleados que han resuelto m�s de 30 casos.*/


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
