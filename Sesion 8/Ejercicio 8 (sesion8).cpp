//Juan Sánchez Rodríguez 

/*Cree otra función para calcular el área hasta un punto cualquiera x, es decir, CDF(x),
usando la anterior aproximación. Para implementar esta función, use la función
Potencia del ejercicio 2 cuando tenga que calcular los términos t^i.

Modifique el programa principal del ejercicio 7 para que llame a la función
CDF(x) e imprima las ordenadas correspondientes a las abscisas*/

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

double Gaussiana(double desv, double abs, double med){
	double gauss;
	const double pi=3.14;
	
	gauss = (1/(desv*sqrt(2*pi)))*exp(-0.5*pow((abs-med)/desv,2));
	
	return gauss;
}

double Potencia(int exp, double b){
	int i;
	double resultado;
	
	resultado = 1.0;

    for (i = 1; i <= exp; i++)    
      resultado = resultado * b;
    
    return resultado;
}

double CDF(double gauss, double abs){
	const double b0=0.2316419;
	const double b1=0.319381530;
	const double b2=-0.356563782;
	const double b3=1.781477937;
	const double b4=-1.821255978;
	const double b5=1.330274429;
	double total=0, t = 1/(1+b0*abs);
	
	for(int i=1; i<=5;i++){
		if(i==1)
			total=b1*Potencia(i,t);
		if(i==2)
			total=total+b2*Potencia(i,t);
		if(i==3)
			total=total+b3*Potencia(i,t);
		if(i==4)
			total=total+b4*Potencia(i,t);
		if(i==5)
			total=total+b5*Potencia(i,t);
	}
	
	return 1-gauss*total;
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
								cout << "\nf(" << abscisa << ")=" << gaussiana << "\n\tCDF(" << CDF(gaussiana,abscisa) << ")";
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
