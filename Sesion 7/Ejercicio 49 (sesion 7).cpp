//Juan Sánchez Rodríguez

/*Diremos que un número entero positivo es secuenciable si se puede generar como
suma de números consecutivos (al menos dos).Escriba un programa que lea un entero n = 1 e imprima todas las
descomposiciones posibles. En este ejercicio puede mezclar operaciones de E/S y C
dentro del mismo bucle.*/

#include <iostream>

using namespace std;

int main()
{
	int numero, contador;
 	
	  	
 	cout << "Introduzca un numero ";
 	cin >> numero;
 	
 	for(int i=1;i<numero;i++){
 		contador=0;
 		for(int j=i; j<numero;j++){
 			contador=contador+j;
 			if(contador==numero){
 				for(int k=i; k<=j; k++){
 					cout << k << " ";
				 }
				 cout << "\n";
			 }
		 }
		 
		 
	}
}
