//Juan S�nchez Rodr�guez 

/*Modifique el ejercicio 7 para que el programa nos diga si los tres valores le�dos est�n
ordenados de forma ascendente, ordenados de forma descendente o no est�n
ordenados. Para resolver este problema, debe usar una variable de tipo enumerado.*/

#include <iostream>

using namespace std;


enum class Numeros_en_Orden
	{ascendente, descendente, no_ordenado};
	
int main()
{
	int x, y, z;
	Orden orden;
	
	cout << "Introduzca los 3 enteros ";
	cin >> x;
	cin >> y;
	cin >> z;
	

	if((x<y&&y<z))
		orden = Orden::ascendente;
	
	if((x>y&&y>z))
		orden = Orden::descendente;
	
	else
		orden = Orden::no_ordenado;
	
	
	cout << "\n\n";
	
	switch(orden){
		case Orden::ascendente:
			cout << "\nEs ascendente";
			break;
			
		case Orden::descendente:
			cout << "\nEs descendente";
			break;
		
		case Orden::no_ordenado:
			cout << "\nNo esta ordenado";
			break;
	}
	
}
