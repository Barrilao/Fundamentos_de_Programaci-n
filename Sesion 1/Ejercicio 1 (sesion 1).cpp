//Juan Sánchez Rodríguez 

/*Indique cuál sería el resultado de las siguientes operaciones:

int salario_base;
int salario_final;
int incremento;
salario_base = 1000;
salario_final = salario_base;
incremento = 200;
salario_final = salario_final + incremento;
salario_base = 3500;
cout << "\nSalario base: " << salario_base;
cout << "\nSalario final: " << salario_final;

Responda razonadamente a la siguiente pregunta: ¿El hecho de realizar la asignación
salario_final = salario_base; hace que ambas variables estén ligadas
durante todo el programa y que cualquier modificación posterior de salario_base
afecte a salario_final?*/


#include <iostream>

using namespace std;

int main()
{
	int salario_base;
	int salario_final;
	int incremento;
	
	salario_base = 1000;
	salario_final = salario_base;
	incremento = 200;
	salario_final = salario_final + incremento;
	salario_base = 3500;
	
	cout << "\nSalario base: " << salario_base;
	cout << "\nSalario final: " << salario_final;
	
	cout << "\n\nComo podemos ver el programa asigna primero al salario base 1000 euros, y al salario final le asigna el salario base, despues al salario final se le suma el incremento (200) y finalmente el salario base se iguala a 3500 ";

}




