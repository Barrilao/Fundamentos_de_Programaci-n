//Juan S�nchez Rodr�guez

/*Se pide leer dos enteros min y max que representar�n un rango de valores
[min,max]. El primer valor a leer, min, debe ser un n�mero positivo y el segundo
valor max, debe ser mayor que min. El programa ir� leyendo estos dos valores
hasta que el usuario los introduzca correctamente.
Una vez le�dos ambos valores, el programa pedir� otro entero nuevo obligando a que
est� dentro del intervalo [min,max]. Si el usuario introduce m�s de 3 valores fuera
del rango, el bucle terminar� y se mostrar� en pantalla un mensaje indicando que
super� el n�mero de intentos m�ximo. En caso contrario (el usuario introduce un valor
en el rango pedido), se mostrar� en pantalla el resultado de calcular nuevo-min y
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
	
