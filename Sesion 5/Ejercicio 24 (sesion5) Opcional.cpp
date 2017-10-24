//Juan Sánchez Rodríguez

/*Se pide leer dos enteros min y max que representarán un rango de valores
[min,max]. El primer valor a leer, min, debe ser un número positivo y el segundo
valor max, debe ser mayor que min. El programa irá leyendo estos dos valores
hasta que el usuario los introduzca correctamente.
Una vez leídos ambos valores, el programa pedirá otro entero nuevo obligando a que
esté dentro del intervalo [min,max]. Si el usuario introduce más de 3 valores fuera
del rango, el bucle terminará y se mostrará en pantalla un mensaje indicando que
superó el número de intentos máximo. En caso contrario (el usuario introduce un valor
en el rango pedido), se mostrará en pantalla el resultado de calcular nuevo-min y
max-nuevo*/

#include <iostream>  

using namespace std; 

int main(){  

	int min, max, nuevo, n;
	
	do{
		cout << "Introduzca el minimo y el maximo ";
		cin >> min;
		cin >> max;
		cout << "\n";
	}while(min>max);
	
	do{
		cout << "\nIntroduzca el valor nuevo ";
		cin >> nuevo;
		n++;
	}while((nuevo<min||nuevo>max)&&n!=3);
	
	if(n==3)
		cout << "\nHas introducido 3 veces mal el numero nuevo, numero de intentos sobrepasado :(";
	
	else
		cout << "\n" <<nuevo-min << " " << max - nuevo;

}
	
