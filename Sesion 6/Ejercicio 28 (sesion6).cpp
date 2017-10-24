//Juan S�nchez Rodr�guez 

/*. Se quiere construir un programa para leer los datos necesarios del ejercicio 11 de la
subida salarial.
Supondremos que s�lo hay tres empleados y que est�n identificados con un c�digo
(1, 2 y 3). Adem�s, el salario por hora es el mismo para todos los empleados. �ste
ser� el primer valor que se leer� (de tipo double) Despu�s de haber le�do este dato,
se leer�n los datos de los casos atendidos por los empleados en el siguiente orden:
en primer lugar, el c�digo del empleado, a continuaci�n el n�mero de segundos que
ha durado la atenci�n telef�nica, en tercer lugar un 1 si el caso se resolvi� de forma
satisfactoria y un 0 en caso contrario; finalmente, un valor entero entre 0 y 5 con el
grado de satisfacci�n del usuario.
Cuando nos encontremos el terminador -1 como primer dato (c�digo del empleado)
se detendr� la introducci�n de datos. Supondremos que siempre se introduce al menos
el primer valor (el salario), pudiendo ser ya el siguiente dato le�do el terminador.
El programa debe imprimir el n�mero total de casos introducidos (3 en el ejemplo
anterior) y el c�digo del empleado con mayor grado de satisfacci�n medio (tambi�n
imprimir� dicho grado medio). */

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	double salario, trabajador, codigo, tiempo ,tiempo1, tiempo2, tiempo3, satisfaccion1=0, satisfaccion2=0, satisfaccion3=0;
	int  satisfaccion, contador=-1, resuelto, contador1=0, contador2=0, contador3=0;
	
	
	cout << "Introduzca el salario por hora ";
	cin >> salario;
	
	do{
		do{
			cout << "\nIntroduzca el codigo del trabajador que le ha atendido ";
			cin >> codigo;
		}while(codigo < -1 || codigo > 3 || codigo ==0);
		
		if(codigo==1){
			cout << "\nIntroduzca el tiempo que ha durado la atencion telefonica ";
			cin >> tiempo;
			tiempo1=tiempo1+tiempo;
			do{
				cout << "\nResolvio su problema? ";
				cin >> resuelto;
			}while(resuelto!=0&&resuelto!=1);
			do{
				cout << "\nIntroduzca su grado de satisfaccion ";
				cin >> satisfaccion;
			}while(satisfaccion<0||satisfaccion>5);
			satisfaccion1=satisfaccion1+satisfaccion;
			contador1++;
		}
		if(codigo==2){
			cout << "\nIntroduzca el tiempo que ha durado la atencion telefonica ";
			cin >> tiempo;
			tiempo2=tiempo2+tiempo;
			do{
				cout << "\nResolvio su problema? ";
				cin >> resuelto;
			}while(resuelto!=0&&resuelto!=1);
			do{
				cout << "\nIntroduzca su grado de satisfaccion ";
				cin >> satisfaccion;
			}while(satisfaccion<0||satisfaccion>5);
			satisfaccion2=satisfaccion2+satisfaccion;
			contador2++;
		}
		if(codigo==3){
			cout << "\nIntroduzca el tiempo que ha durado la atencion telefonica ";
			cin >> tiempo;
			tiempo3=tiempo3+tiempo;
			do{
				cout << "\nResolvio su problema? ";
				cin >> resuelto;
			}while(resuelto!=0&&resuelto!=1);
			do{
				cout << "\nIntroduzca su grado de satisfaccion ";
				cin >> satisfaccion;
			}while(satisfaccion<0||satisfaccion>5);
			satisfaccion3=satisfaccion3+satisfaccion;
			contador3++;
		}
		
		contador++;
	}while(codigo!=-1);
	
	if(contador1==0)
		contador1=1;

	if(contador2==0)
		contador2=1;

	if(contador3==0)
		contador3=1;

	satisfaccion1=satisfaccion1/contador1;
	satisfaccion2=satisfaccion2/contador2;
	satisfaccion3=satisfaccion3/contador3;
		
	if(contador==0)
		cout << "\nNo se introdujo ningun caso ";
	
	else{
		if(satisfaccion1>satisfaccion2&&satisfaccion1>satisfaccion3)
			cout << "\nHay " << contador << " casos, el trabajador con mejor valoracion es el 1 con una media de " << satisfaccion1;
		
		if(satisfaccion2>satisfaccion1&&satisfaccion2>satisfaccion3)
			cout << "\nHay " << contador << " casos, el trabajador con mejor valoracion es el 2 con una media de " << satisfaccion2;
	
		if(satisfaccion3>satisfaccion2&&satisfaccion3>satisfaccion1)
			cout << "\nHay " << contador << " casos, el trabajador con mejor valoracion es el 3 con una media de " << satisfaccion3;
	}
}

