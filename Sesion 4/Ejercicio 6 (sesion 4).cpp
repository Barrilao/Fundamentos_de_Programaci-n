//Juan S�nchez Rodr�guez

/*Recupere la soluci�n del ejercicio 5 sobre el c�mputo de la n�mina de los trabajadores
de un centro de atenci�n telef�nica. Implemente ahora el siguiente criterio para la
subida salarial. Se aplicar� una subida del ?? a los empleados que han resuelto m�s
de 30 casos y una subida del ?? si el grado de satisfacci�n media de los usuarios
es mayor o igual que ???. Ambas subidas son compatibles, es decir, si un trabajador
cumple las dos condiciones, se le aplicar�n ambas subidas.*/

#include <iostream>

using namespace std;

int main()
{
	double salario, satisfaccion, aux;
	int horas, casos;
	
	cout << "Introduzca, en el siguiente orden, sus siguientes datos: salario por hora, horas al mes, casos resueltos y el grado medio de satisfaccion ";
	cin >> salario;
	cin >> horas;
	cin >> casos;
	cin >> satisfaccion;
	
	salario = salario*horas;
	aux=salario;
	
	
	if(casos>30){
		salario=salario+(salario*4/100);
	}
	
	
	if(satisfaccion>4){
		aux=(aux+(aux*2/100))-aux;
	}
	
	else{
		aux = 0;
	}
	
	
	
	salario = salario + aux;
	
	cout << "\nSu salario queda como " << salario;
	
}
