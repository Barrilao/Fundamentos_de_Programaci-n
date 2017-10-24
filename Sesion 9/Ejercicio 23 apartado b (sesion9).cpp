//Juan Sánchez Rodríguez 
/*En vez de calcular la pendiente en el programa principal, vamos a ponerlo como
un método de la clase y así lo reutilizaremos todas las veces que necesitemos.
Añada un método para el cálculo de la pendiente y modifique el main para tener
en cuenta este cambio.
Obtener la ordenada (y) dado un valor de abscisa x.
Obtener la abscisa (x) dado un valor de ordenada y.*/

#include <iostream>
using namespace std;

class Recta{
	public:
		double A=0.0;
		double B=0.0;
		double C=0.0;
		
		double Pendiente(){
			return -A/B;
		}
		
		double Ordenada(double x){
			return (-C-x*A)/B;
		}
		
		double Abscisa(double y){
			return (-C-y*B)/A;
		}
};

int main(){
	double x1,x2,y1,y2,independiente1,independiente2;
	double ordenada, abscisa;
	
	Recta recta1;
	Recta recta2;
	
	cout << "Introduzca los coeficientes de la recta 1 ";
	cin >> x1;
	cin >> y1;
	cin >> independiente1;
	cout << "\nIntroduzca los coeficientes de la recta 2 ";
	cin >> x2;
	cin >> y2;
	cin >> independiente2;
	cout << "\nIntroduzca la abscisa ";
	cin >> abscisa;
	cout << "\nIntroduzca la ordenada ";
	cin >> ordenada;
	
	recta1.A = x1;
	recta1.B = y1;
	recta2.A = x2;
	recta2.B = y2;
	recta1.C = independiente1;
	recta2.C = independiente2;

	cout << "\nLa pendiente de la recta 1 es " << recta1.Pendiente();
	cout << "\nLa pendiente de la recta 2 es " << recta2.Pendiente();
	cout << "\nSi en la recta 1 la abscisa es " << abscisa << " su ordenada sera " << recta1.Ordenada(abscisa);
	cout << "\nSi en la recta 1 la ordenada es " << ordenada << " su abscisa sera " << recta1.Abscisa(ordenada);
}
