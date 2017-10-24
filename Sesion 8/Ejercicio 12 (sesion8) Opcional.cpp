//Juan Sánchez Rodríguez

/*. Retome la solución del ejercicio 11 de esta Relación de Problemas. Modifíquela para
tener en cuenta que los límites correspondientes a los casos resueltos (20 y 30) y el
grado de satisfacción media (4), así como los porcentajes de incrementos correspondientes
(3%, 4% y 2%) ya no son constantes sino que pueden variar.*/

#include <iostream>
#include <cmath>

using namespace std;

double SalarioFinal(int cont, double satisf, double dinero, int min, int max, int satisfmed, double psatisf, double pentredos, double pmaximo){
	double copia = dinero;
	
	if(satisf>=satisfmed)
		dinero=dinero+copia*psatisf;
		
	if(cont>=min&&cont<=max)
		dinero=dinero+copia*pentredos;
		
	if(cont>max)
		dinero=dinero+copia*pmaximo;
		
	return dinero;
}


int main()
{
	double salario, trabajador, codigo, tiempo ,tiempo1, tiempo2, tiempo3, satisfaccion1=0, satisfaccion2=0, satisfaccion3=0, porcentaje_entre_dos, porcentaje_maximo, porcentaje_satisfaccion;
	int  satisfaccion, contador=-1, contador1=0, contador2=0, contador3=0, contador11=0, contador22=0, contador33=0, resuelto, minimo, maximo, satisfaccion_necesaria;
	
	
	
	cout << "Introduzca el salario por hora ";
	cin >> salario;
	
	cout << "\nIntroduzca el porcentaje para la subida de sueldo entre un minimo y un maximo ";
	cin >> porcentaje_entre_dos;
	
	cout << "\nIntroduzca el minimo ";
	cin >> minimo;
	
	cout << "\nIntroduzca el maximo ";
	cin >> maximo;
	
	cout << "\nIntroduzca el porcentaje para la subida de sueldo en el caso de superar el maximo ";
	cin >> porcentaje_maximo;
	
	cout << "\nIntroduzca el porcentaje para la subida de sueldo en el caso de superar cierta satisfaccion ";
	cin >> porcentaje_satisfaccion;
	
	cout << "\nIntroduzca la satisfaccion necesaria para la subida de sueldo ";
	cin >> satisfaccion_necesaria;
	
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
			if(resuelto=1)
				contador11++;
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
			if(resuelto=1)
				contador22++;
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
			if(resuelto=1)
				contador33++;
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
	
	cout<< "\nEl salario del trabajador 1 es " << SalarioFinal(contador11,satisfaccion1,salario,minimo,maximo,satisfaccion_necesaria,porcentaje_satisfaccion,porcentaje_entre_dos,porcentaje_maximo) ;
	cout<< "\nEl salario del trabajador 2 es " << SalarioFinal(contador22,satisfaccion2,salario,minimo,maximo,satisfaccion_necesaria,porcentaje_satisfaccion,porcentaje_entre_dos,porcentaje_maximo) ;
	cout<< "\nEl salario del trabajador 3 es " << SalarioFinal(contador33,satisfaccion3,salario,minimo,maximo,satisfaccion_necesaria,porcentaje_satisfaccion,porcentaje_entre_dos,porcentaje_maximo) ;
		
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


