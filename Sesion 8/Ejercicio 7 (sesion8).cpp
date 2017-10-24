//Juan Sánchez Rodríguez 

/*Al menos debe definir la función gaussiana para que
calcule el valor de la ordenada, para unos valores concretos de abscisa, esperanza y
desviación.*/

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

double Gaussiana(double desv, double abs, double med){
	double gauss;
	const int pi =3.14;
	
	gauss = (1/(desv*sqrt(2*pi)))*exp(-0.5*pow((abs-med)/desv,2));
	
	return gauss;
}

int main()
{
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
								gaussiana = Gaussiana(desviacion, abscisa, media);
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
