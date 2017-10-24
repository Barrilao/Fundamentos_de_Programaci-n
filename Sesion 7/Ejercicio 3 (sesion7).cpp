//Juan Sánchez Rodríguez 

/*Construya un programa principal que llame a Max3 con tres valores leídos desde
teclado.*/

#include <iostream> 
using namespace std;

int Max3(int a, int b, int c){
	int max;
	
	if (a>b)
		max=a;
		
	else
		max=b;
		
	if(c>max)
		max=c;
	
	return max;
}

int main(){
	int n1, n2, n3, maximo;
	
	cout << "Introduzca los valores ";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	maximo=Max3(n1,n2,n3);
	
	cout << "\nEl maximo es " << maximo;
	
}
