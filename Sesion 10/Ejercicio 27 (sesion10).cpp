//Juan Sánchez Rodríguez
/*Recupere la solución del ejercicio 8 de esta relación de problemas sobre la función
gaussiana. En vez de trabajar con funciones, plantee la solución con una clase. Debe
diseñar la clase teniendo en cuenta que la función matemática gaussiana viene determinada
unívocamente por el valor de la esperanza y la desviación, es decir, son estos
dos parámetros lo que distinguen a una función gaussiana de otra.*/

#include <iostream>
#include <cmath>
using namespace std;

class Gaussiana{
	private:
		double esperanza;
		double desviacion;
	public:
		Gaussiana(double esp, double des){
			esperanza = esp;
			desviacion = des;
		}
		
		double Esperanza(){
			return esperanza;
		}
		
		double Desviacion(){
			return desviacion;
		}
		
		double Operacion(double abscisa){
			double gauss;
			const double pi=3.14;
	
			gauss = (1/(desviacion*sqrt(2*pi)))*exp(-0.5*pow((abscisa-esperanza)/desviacion,2));
		
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
};

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
				Gaussiana funcion(media,desviacion);
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
								gaussiana = funcion.Operacion(abscisa);
								cout << "\nf(" << abscisa << ")=" << gaussiana << "\n\tCDF(" << funcion.CDF(gaussiana,abscisa) << ")";
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


