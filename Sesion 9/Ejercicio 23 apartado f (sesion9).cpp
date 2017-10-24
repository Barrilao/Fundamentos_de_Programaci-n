//Juan Sánchez Rodríguez 
/*Suprima ahora el método SetCoeficientes. De esta forma, una vez creado
el objeto (pasándole los datos apropiados en el constructor) ya no podremos
modificar los datos miembro.*/

#include <iostream>
using namespace std;

class Recta{
	private:
		double A=0.0;
		double B=0.0;
		double C=0.0;
	public:
		Recta(double x, double y, double ind){
			A=x;
			B=y;
			C=ind;
		}
		
		double X(){
			return A;
		}
		
		double Y(){
			return B;
		}
		
		double Independiente(){
			return C;
		}
		
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
	
	Recta recta1(x1,y1,independiente1);
	Recta recta2(x2,y2,independiente2);

	cout << "\nLa pendiente de la recta 1 es " << recta1.Pendiente();
	cout << "\nLa pendiente de la recta 2 es " << recta2.Pendiente();
	cout << "\nSi en la recta 1 la abscisa es " << abscisa << " su ordenada sera " << recta1.Ordenada(abscisa);
	cout << "\nSi en la recta 1 la ordenada es " << ordenada << " su abscisa sera " << recta1.Abscisa(ordenada);
}
