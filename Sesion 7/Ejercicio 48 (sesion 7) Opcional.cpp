//Juan S�nchez Rodr�guez

/*Se pide crear un men� principal para que el usuario pueda elegir las siguientes
opciones:
Introducir par�metros de la funci�n (esperanza y desviaci�n)
Salir del programa
Si el usuario elige la opci�n de salir, el programa terminar�; si elige la opci�n de introducir
los par�metros, el programa leer� los dos par�metros (esperanza y desviaci�n).
La media puede ser un valor cualquiera, pero la desviaci�n ha de ser un n�mero positivo.
A continuaci�n, el programa presentar� un men� con las siguientes opciones:
Introducir rango de valores de abscisas
Volver al men� anterior
Si el usuario elige volver al men� anterior, el programa debe presentar el primer men�
(el de la introducci�n de los par�metros) Si el usuario elige introducir los valores de
abscisas, el programa le pedir� un valor minimo, un valor maximo(ha de ser mayor
que minimo) y un incremento y mostrar� el valor de la funci�n gaussiana en todos
los valores de x (la abscisa) entre minimo y maximo a saltos de incremento,
es decir, minimo, minimo + incremento, minimo + 2*incremento, � � � , hasta
llegar, como mucho, a maximo. Despu�s de mostrar los valores de la funci�n, el
programa volver� al men� de introducci�n del rango de valores de abscisas.*/

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
	const int pi =3.14;
	int eleccion, eleccion2;
	double media, desviacion, gaussiana, minimo, maximo, incremento, abscisa;
	
	do{
		system("cls"); 
		cout << "MENU PRINCIPAL\n\n";
		cout << "1. Introducir parametros de la funcion (esperanza y desviacion)\n";
		cout << "2. Salir del programa\n\n";
		cin >> eleccion;
		switch(eleccion){
			case 1:{
				system("cls");
				cout << "Introduce la media ";
				cin >> media;
				do{
					cout << "\nIntroduzca la desviacion ";
					cin >> desviacion;
				}while(desviacion <= 0);
				do{
					system("cls");
					cout << "1. Introducir rango de valores de abscisas\n";
					cout << "2. Volver al menu anterior\n\n";
					cin >> eleccion2;
					switch(eleccion2){
						case 1:{
							system("cls");
							do{
								cout << "Introduzca el valor minimo ";
								cin >> minimo;
								cout << "\nIntroduzca el valor maximo ";
								cin >> maximo;
								cout << "\n";
							}while(maximo < minimo);
							cout << "Introduzca el incremento ";
							cin >> incremento;
							for(int i=0; minimo+incremento*i<=maximo; i++){
								abscisa=minimo+incremento*i;
								gaussiana = (1/(desviacion*sqrt(2*pi)))*exp(-0.5*pow((abscisa-media)/desviacion,2));
								cout << "\nf(" << abscisa << ")=" << gaussiana;
							}
							cout << "\n\n";
							system("pause");
							break;
							
						}
						case 2:{
							break;
						}
						default:{
							system("cls");
							cout << "La opcion elegida es incorrecta ";
							cout << "\n\n";
							system("pause");
							break;
						}
					}
				}while(eleccion2!=2);
				break;
			
			}
			case 2:{
				break;
			}
			default:{
				system("cls");
				cout << "La opcion elegida es incorrecta ";
				cout << "\n\n";
				system("pause");
				break;
			}
		}
	}while(eleccion!=2);
}
	
	
	
	
	

