//Juan Sánchez Rodríguez

/*Reescriba el ejercicio 40, use la función factorial vista en las transparencias de clase. Para
el cómputo de la potencia, defina la función potencia*/

#include <iostream> 
using namespace std;

long long Factorial(int n){
	int i;
	long long fact=1;
	
	for(i=2;i<=n;i++)
		fact=fact*i;
	
	return fact;
}

double Potencia(int exp, double b){
	int i;
	double resultado;
	
	resultado = 1.0;

    for (i = 1; i <= exp; i++)    
      resultado = resultado * b;
    
    return resultado;
}
   
int main(){
   long long factorial;
   int n;
   int multiplicando;

   cout << "Factorial y potencia\n\n";
   do{
   cout << "Introduzca un entero entre 0 y 20: ";
   cin >> n;
	}while(n>20||n<0);
	
	factorial=Factorial(n);

   cout << "\nEl factorial de " << n << " es " << factorial;

   double potencia, base;
   int exponente;
   
   cout << "\n\nIntroduzca la base: ";
   cin >> base;
   cout << "\nIntroduzca el exponente: ";
   cin >> exponente;

   potencia=Potencia(exponente,base);

   cout << "\n" << base << " elevado a " << exponente << " es igual a " << potencia << "\n\n";

   system("pause"); 
}
