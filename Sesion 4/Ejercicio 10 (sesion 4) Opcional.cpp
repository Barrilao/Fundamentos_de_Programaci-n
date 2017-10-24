//Juan Sánchez Rodríguez

/*. La tabla para el cálculo del precio a pagar en los parkings de Madrid para el 2015 es
la siguiente:
Si permanece más de 660 minutos se paga una única tarifa de 31.55 euros
Desde el minuto 0 al 30: 0.0412 euros cada minuto
Desde el minuto 31 al 90: 0.0370 euros cada minuto
Desde el minuto 91 al 120: 0.0311 euros cada minuto
Desde el minuto 121 al 660: 0.0305 euros cada minuto

Dado un tiempo de entrada (hora, minuto y segundo) y un tiempo de salida, construya
un programa que calcule la tarifa final a cobrar.*/

#include <iostream>

using namespace std;

int main()
{
	int hora1, hora2, minuto1, minuto2, segundo1, segundo2;
	double precio;
	
	cout << "Introduce hora de entrada ";
	cin >> hora1;
	cin >> minuto1;
	cin >> segundo1;
	
	cout << "\nIntroduce hora de salida ";
	cin >> hora2;
	cin >> minuto2;
	cin >> segundo2;
	
	hora1=hora1*60;
	hora2=hora2*60;
	
	minuto1=minuto1 + hora1;
	minuto2=minuto2 + hora2;
	
	
	
	minuto2=minuto2-minuto1;
	
	if(minuto2<=30&&minuto2>0){
		precio=minuto2*0.0412;
	}
	
	if(minuto2<=90&&minuto2>=31){
		precio=minuto2*0.037;
	}
	
	if(minuto2<=120&&minuto2>=91){
		precio=minuto2*0.0311;
	}
	
	if(minuto2<=660&&minuto2>=121){
		precio=minuto2*0.0305;
	}
	
	if(minuto2<=0||minuto2>660){
		precio=-1;
	}
	
	cout << "\nEl precio es " << precio;
}
