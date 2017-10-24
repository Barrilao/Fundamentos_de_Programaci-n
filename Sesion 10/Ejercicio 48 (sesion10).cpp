//Juan Sánchez Rodríguez
/*Cree ahora una clase llamada Circunferencia. Para establecer el centro, se usará
un dato miembro que ha de ser de tipo CoordenadasPunto2D.
Añada métodos para obtener la longitud de la circunferencia y el área del círculo interior.
Añada también un método para saber si la circunferencia contiene a un punto cualquiera.*/

#include <iostream>  
using namespace std; 

struct CoordenadasPunto2D{
   double abscisa;
   double ordenada;
};

class Circunferencia{
	private:
		CoordenadasPunto2D datos;
		double radio;
		long double pi;
	public:
		Circunferencia(double abs, double ord, double rad){
			datos.abscisa=abs;
			datos.ordenada=ord;
			radio=rad;
			pi=3.1415927;
		}
		
		CoordenadasPunto2D Datos(){
			return datos;
		}
		
		double Radio(){
			return radio;
		}
		
		long double Pi(){
			return pi;
		}
		
		double Area(){
			return pi * radio *radio;
		}
		
		double Longitud(){
			return 2* pi * radio;
		}
		
		bool Contiene(CoordenadasPunto2D datos2){
			if((datos.abscisa-datos2.abscisa)*(datos.abscisa-datos2.abscisa)+(datos.ordenada-datos2.ordenada)*(datos.ordenada-datos2.ordenada)<=radio)
				return true;
			else
				return false;
		}
};

int main()
{
	CoordenadasPunto2D punto;
	double radio, centro_abscisa, centro_ordenada;
	
	cout << "Introduzca el radio de la circunferencia ";
	cin >> radio;
	cout << "\nIntroduzca la abscisa del centro de la circunferencia ";
	cin >> centro_abscisa;
	cout << "\nIntroduzca la ordenada del centro de la circunferencia ";
	cin >> centro_ordenada;
	cout << "\nIntroduzca las coordenadas del punto para comprobar si esta en la circunferencia ";
	cin >> punto.abscisa;
	cin >> punto.ordenada;
	
	Circunferencia circunferencia(centro_abscisa,centro_ordenada,radio);
	
	cout << "\nEl area de la cicunferencia es " << circunferencia.Area();
	cout << "\nLa longitud es " << circunferencia.Longitud();
	
	if(circunferencia.Contiene(punto))
		cout << "\nEl punto esta en la circunferencia ";
	else
		cout << "\nEl punto no esta en la circunferencia ";
	
}
