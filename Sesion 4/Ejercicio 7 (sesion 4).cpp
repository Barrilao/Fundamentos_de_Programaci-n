//Juan S�nchez Rodr�guez 

/*Escriba un programa en C++ para que lea tres enteros desde teclado y nos diga si
est�n ordenados (da igual si es de forma ascendente o descendente) o no lo est�n.*/

#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	
	cout << "Introduzca los 3 enteros ";
	cin >> x;
	cin >> y;
	cin >> z;
	
	if((x<y&&y<z)||(x>y&&y>z)){
	
		cout << "\nLos numeros estan ordenados ";
	}
	else{
	
		cout << "\nLos numeros no estan ordenados ";
	}
}
