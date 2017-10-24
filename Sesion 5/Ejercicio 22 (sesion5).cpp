//Juan Sánchez Rodríguez

/*Recupere la solución del ejercicio 10 (función gaussiana) de la relación de problemas
I. Se pide construir un programa para imprimir el resultado de aplicar dicha función a
varios valores de abscisas.
En primer lugar, se leerán los parámetros que definen la función, es decir, la esperanza
y la desviación. La esperanza puede ser cualquier valor, pero para leer el valor de
desviación debe utilizar un bucle y obligar a que sea mayor o igual que cero.
A continuación el programa pedirá un valor minimo, un valor maximo y un
incremento. El valor maximo ha de leerse con un filtro de entrada obligando a que
sea mayor que minimo. El programa mostrará el valor de la función gaussiana en
todos los valores de x (la abscisa) entre minimo y maximo a saltos de incremento.*/

#include <iostream>
#include <cmath>

using namespace std;

	
int main()
{
	
	double media, desviacion, gaussiana, abscisa, minimo, maximo, incremento;
	int n=-1;
	
	cout << "Introduzca la media ";
	cin >> media;
	
	do{
	cout << "\nIntroduzca la desviacion ";
	cin >> desviacion;
	}while(desviacion <= 0);
	
	do{
	cout << "\nIntroduzca un minimo, un maximo y un incremento ";
	cin >> minimo;
	cin >> maximo;
	cin >> incremento;
	}while(minimo > maximo);
	
	do{
	
	abscisa = 0;
	n++;
	
	abscisa = minimo + incremento*n;
	gaussiana = (1/(desviacion*sqrt(2*3.1416)))*exp(-0.5*pow((abscisa-media)/desviacion,2));

	cout << "\nLa Gaussiana es igual a " << gaussiana;
	
	
	}while(abscisa<maximo);
	
	

}
