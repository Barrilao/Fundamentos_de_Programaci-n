//Juan Sánchez Rodríguez

/*Escriba un programa que calcule la estimación de la población de un territorio después
de tres años. Para ello, el programa debe leer la población inicial, la tasa de natalidad,
la de mortalidad y la tasa de migración. Ésta última es la diferencia entre los que se
van y los que vienen, por lo que puede ser o bien positiva o bien negativa.
Suponga que todos los datos son enteros.
Tenga en cuenta que una vez calculada la población que habrá el siguiente año, las
tasas se vuelven a aplicar sobre la población así obtenida, y así sucesivamente, tantos
años como estemos interesados.*/

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
	
	cout << "\nDespues de tres años la poblacion total sera de " << poblacion;
	

	
}
