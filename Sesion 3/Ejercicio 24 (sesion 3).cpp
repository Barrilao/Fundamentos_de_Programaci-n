//Juan Sánchez Rodríguez

/*Construya un programa que declare las variables x, y y z, lea su
valor desde teclado e intercambien entre sí sus valores de forma que el valor de x
pasa a y, el de y pasa a z y el valor de z pasa a x (se pueden declarar variables
auxiliares aunque se pide que se use el menor número posible)*/

#include <iostream>

using namespace std;

int main(){
	int x, y, z, aux;
	
	cout << "Introduzca los valores de x, y, z ";
	cin >> x;
	cin >> y;
	cin >> z;
	
	aux = y;
	y = x;
	x = z;
	z = aux;
	
	cout << "\nLos valores intercambiados son " << x << " " << y << " " << z;
	
}
	
