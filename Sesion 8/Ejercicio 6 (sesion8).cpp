//Juan S�nchez Rodr�guez 

/*Reescriba la soluci�n del ejercicio 46 que calcula la suma de los primeros T factoriales.
Para ello, debe leer el valor T usando la funci�n LeeIntRango del ejercicio 4
para obligar a que est� en el intervalo [1,20].
Debe definir la funci�n SumaFactoriales que calcule la suma pedida. Implemente
dos versiones de esta funci�n:
� En una primera versi�n, la funci�n SumaFactoriales debe llamar a la funci�n
Factorial, para realizar la suma tal y como se indica en el ejercicio 46
� En una segunda versi�n, la funci�n SumaFactoriales debe realizar la suma
de forma directa tal y como se indica en el ejercicio 47. Ponga dentro de un
comentario la primera versi�n. */

#include <iostream>  

using namespace std; 

int LeeIntRango() {
   int a_leer;
   
   do{
      cout << "Introduzca el numero ";
      cin >> a_leer;
      cout << "\n";
   }while (1 > a_leer || 20 < a_leer);
   
   return a_leer;
}

int Factorial(int valor){  //Mi ejercicio 46 lo realice directamente sin usar bucles anidados
	
	int operador=1, factorial=0;
	
	for(int i=1;i<=valor;i++){
		operador=operador*i;
		factorial=factorial+operador;
	}
	
	return factorial;
}

int main(){
	int numero;
	
	numero=LeeIntRango();
	
	cout << Factorial(numero);
}

