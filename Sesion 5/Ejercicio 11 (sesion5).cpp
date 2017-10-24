//Juan Sánchez Rodríguez

/*Modifique la solución del ejercicio 6 para que también aplique una subida del 3% a los
que han resuelto entre 20 y 30 casos*/

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
	
	if(casos<=30&&casos>=20){
		salario=salario+(salario*3/100);
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
