//Juan S�nchez Rodr�guez

/*Construya un programa que calcule cu�ndo se produjo la mayor secuencia de d�as
consecutivos con temperaturas crecientes. El programa leer� una secuencia de reales
representando temperaturas, hasta llegar al -1 y debe calcular la subsecuencia de
n�meros ordenada, de menor a mayor, de mayor longitud.
El programa nos debe decir la posici�n donde comienza la subsecuencia y su longitud.*/

#include <iostream>

using namespace std; 

int main(){
	double temperatura, minimo=-273;
	int longitud=0, real=0, inicio=1, anterior=0;
	
	do{
		cout << "Introduzca la temperatura ";
		cin >> temperatura;
		
		if(temperatura!=-1){
			if(temperatura>minimo){
				minimo=temperatura;
				longitud=longitud+1;
				if(longitud>real){
					inicio=inicio+anterior;
					real=longitud;
					anterior=0;
				}
			}
			else{
				minimo=-273;
				anterior=longitud;
				longitud=1;
			}
		}
	}while(temperatura!=-1);
	
	cout << "\nEmpieza en " << inicio << " y su longitud es " << real;
}
