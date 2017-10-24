//Juan S�nchez Rodr�guez

/*El algoritmo de la multiplicaci�n rusa es una forma distinta de calcular la multiplicaci�n
de dos n�meros enteros n * m. Para ello este algoritmo va calculando el doble del
multiplicador m y la mitad (sin decimales) del multiplicando n hasta que n tome el
valor 1 y suma todos aquellos multiplicadores cuyos multiplicandos sean impares.
Cree un programa para leer dos enteros n y m y calcule su producto utilizando este
algoritmo. No puede utilizarse en ning�n momento el operador producto *.*/

#include <iostream>

using namespace std; 

int main(){
	int multiplicando, multiplicador, total=0;
	
	cout << "Introduzca el multiplicando y el multiplicador ";
	cin >> multiplicando;
	cin >> multiplicador;
	
	do{
		if(multiplicando%2!=0){
			total=total+multiplicador;
		}
		multiplicando=multiplicando/2;
		multiplicador=multiplicador*2;
	}while(multiplicando>=1);
	
	cout << "\nLa suma es " << total;
}
