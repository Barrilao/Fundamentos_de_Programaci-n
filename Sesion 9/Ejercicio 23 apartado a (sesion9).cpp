//Juan Sánchez Rodríguez 
/*Defina la clase Recta. En este apartado utilice únicamente datos miembro públicos.
Cree un programa principal que haga lo siguiente:
• Defina dos objetos de la clase Recta.
• Lea seis reales desde teclado.
• Le asigne los tres primeros a los coeficientes de una recta y los otros tres a
la segunda recta.
• Calcule e imprima la pendiente de cada recta.*/

#include <iostream>
using namespace std;

class Recta{
	public:
		double A=0.0;
		double B=0.0;
};

int main(){
	double x1,x2,y1,y2,independiente1,independiente2,pendiente1,pendiente2;
	
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
	
	recta1.A = x1;
	recta1.B = y1;
	recta2.A = x2;
	recta2.B = y2;
	
	pendiente1 = -recta1.A/recta1.B;
	pendiente2 = -recta2.A/recta2.B;
	
	cout << "\nLa pendiente de la recta 1 es " << pendiente1;
	cout << "\nLa pendiente de la recta 2 es " << pendiente2;
}
