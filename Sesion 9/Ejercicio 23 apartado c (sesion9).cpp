//Juan Sánchez Rodríguez 
/*Cambie ahora los datos miembro públicos y póngalos privados.*/

#include <iostream>
using namespace std;

class Recta{
	private:
		double A=0.0;
		double B=0.0;
		double C=0.0;
	public:
		void SetX(double x){
			A=x;
		}
		
		void SetY(double y){
			B=y;
		}
		
		void SetInd(double ind){
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
	
	recta1.SetX(x1);
	recta1.SetY(y1);
	recta1.SetInd(independiente1);
	recta2.SetX(x2);
	recta2.SetY(y2);
	recta2.SetInd(independiente2);

	cout << "\nLa pendiente de la recta 1 es " << recta1.Pendiente();
	cout << "\nLa pendiente de la recta 2 es " << recta2.Pendiente();
	cout << "\nSi en la recta 1 la abscisa es " << abscisa << " su ordenada sera " << recta1.Ordenada(abscisa);
	cout << "\nSi en la recta 1 la ordenada es " << ordenada << " su abscisa sera " << recta1.Abscisa(ordenada);
}
