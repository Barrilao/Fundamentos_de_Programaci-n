//Juan Sánchez Rodríguez 

/*Defina una función SalarioFinal que calcule el salario final del trabajador en el ejercicio 28*/

#include <iostream>
#include <cmath>

using namespace std;

double SalarioFinal(int cont, double satisf, double dinero){
	double copia = dinero;
	
	if(satisf>=4)
		dinero=dinero+copia*0.02;
		
	if(cont>=20&&cont<=30)
		dinero=dinero+copia*0.03;
		
	if(cont>30)
		dinero=dinero+copia*0.04;
		
	return dinero;
}


int main()
{
	double salario, trabajador, codigo, tiempo ,tiempo1, tiempo2, tiempo3, satisfaccion1=0, satisfaccion2=0, satisfaccion3=0;
	int  satisfaccion, contador=-1, contador1=0, contador2=0, contador3=0, contador11=0, contador22=0, contador33=0, resuelto;
	
	
	
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
	
	cout<< "\nEl salario del trabajador 1 es " << SalarioFinal(contador11,satisfaccion1,salario) ;
	cout<< "\nEl salario del trabajador 2 es " << SalarioFinal(contador22,satisfaccion2,salario) ;	
	cout<< "\nEl salario del trabajador 3 es " << SalarioFinal(contador33,satisfaccion3,salario) ;
		
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

