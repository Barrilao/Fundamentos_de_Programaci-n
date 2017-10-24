//Juan Sánchez Rodríguez

/*Escriba un programa que lea las variables letra, edad, adivine y anio, calcule el
valor de las expresiones lógicas anteriores e imprima el resultado. Debe almacenarse
el resultado de las expresiones lógicas en variables de tipo bool*/

#include <iostream>

using namespace std;

int main(){
	bool minuscula, mayor, variable,bisiesto;
	int edad, adivine, anio;
	char letra;
	
	minuscula = false;
	mayor = false;
	variable = false;
	bisiesto = false;
	
	cout << "Introduzca la letra ";
	cin >> letra;
	cout << "\nIntroduzca la edad ";
	cin >> edad;
	cout << "\nIntroduzca entero ";
	cin >> adivine;
	cout << "\nIntroduzca el anio ";
	cin >> anio;
	
	if (letra >= 'a' && letra <= 'z'){
		minuscula = true;
	}
	
	if (edad >= 18 && edad <= 65){
		mayor = true;
	}
	
	if (adivine >= 1 && adivine <= 100){
		variable = true;
	}
	
	if((anio%4==0&&anio%100!=0)||anio%400==0){
		bisiesto=true;
	}
	
	
	cout << "\n\n"<< minuscula << " " << mayor << " " << variable << " " << bisiesto ;
	
}
