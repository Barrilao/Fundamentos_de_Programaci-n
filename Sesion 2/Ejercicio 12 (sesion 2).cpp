//Juan S�nchez Rodr�guez

/*Escriba un programa que calcule la estimaci�n de la poblaci�n de un territorio despu�s
de tres a�os. Para ello, el programa debe leer la poblaci�n inicial, la tasa de natalidad,
la de mortalidad y la tasa de migraci�n. �sta �ltima es la diferencia entre los que se
van y los que vienen, por lo que puede ser o bien positiva o bien negativa.
Suponga que todos los datos son enteros.
Tenga en cuenta que una vez calculada la poblaci�n que habr� el siguiente a�o, las
tasas se vuelven a aplicar sobre la poblaci�n as� obtenida, y as� sucesivamente, tantos
a�os como estemos interesados.*/

#include <iostream>

using namespace std;

int main()
{
	int poblacion, natalidad, mortalidad, migracion;
	
	cout << "Introduzca la poblacion, la natalidad, la mortalidad y la migracion ";
	cin >> poblacion;
	cin >> natalidad;
	cin >> mortalidad;
	cin >> migracion;
	
	poblacion = poblacion + (poblacion*(natalidad-mortalidad-migracion)/1000);
	poblacion = poblacion + (poblacion*(natalidad-mortalidad-migracion)/1000);
	poblacion = poblacion + (poblacion*(natalidad-mortalidad-migracion)/1000);
	
	cout << "\nDespues de tres a�os la poblacion total sera de " << poblacion;
	

	
}
