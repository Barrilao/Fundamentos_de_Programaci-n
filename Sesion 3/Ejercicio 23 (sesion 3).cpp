//Juan Sánchez Rodríguez

/*Construya un programa que lea desde teclado tres variables correspondientes a un
número de horas, minutos y segundos, respectivamente. A continuación, el programa
debe calcular las horas, minutos y segundos dentro de su rango correspondiente. Por
ejemplo, dadas 312 horas, 119 minutos y 1291 segundos, debería dar como resultado
13 días, 2 horas, 20 minutos y 31 segundos. El programa no calculará meses, años,
etc. sino que se quedará en los días*/

#include <iostream>

using namespace std;

int main(){
	int hora, minuto, segundo, resto;
	
	cout << "Introduzca las horas, minutos y segundos ";
	cin >> hora;
	cin >> minuto;
	cin >> segundo;
	
	resto = segundo/60;
	segundo =segundo%60;
	minuto = minuto+resto;
	resto = minuto/60;
	minuto = minuto%60;
	hora = hora + resto;
	resto = hora/24;
	hora = hora%24;
	
	cout << "\n El resultado es " << resto << " dias " << hora << " horas " << minuto << " minutos " << segundo << " segundos";
	
}
	
