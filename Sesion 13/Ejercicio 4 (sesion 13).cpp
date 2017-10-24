//Juan Sánchez Rodríguez

/*Recupere
la solución del ejercicio 5 (Descodifica) de la relación de problemas IV. Implemente
el método de descodificación como un método de la clase SecuenciaCaracteres.
El método no modificará la secuencia de caracteres sobre la que se aplica, sino que
construirá y devolverá una nueva secuencia.*/

#include <iostream>

using namespace std;                                                         
	Descodifica{
	private:
		static const int TAMANIO=1000;
		char vector[TAMANIO];
		char vector_copia[TAMANIO];
		int total_usados;
		int total_usados2;
	public:
		Descodifica()
			:total_usados(0)
			{
			}
			
		int Total_Usados(){
			return total_usados;
		}
		
		int Total_Usados2(){
			return total_usados2;
		}
		
		void Aniade(char elemento){
			if(total_usados<TAMANIO){
				vector[total_usados]=elemento;
				total_usados++;
			}
		}
		
		char Descodificador(){
			total_usados2=0;
			for(int i=0;i<total_usados;i++){
				if(i==0||vector[i+1]==' '||vector[i-1]==' '||i==total_usados-1){
					vector_copia[total_usados2]=vector[i];
					total_usados2++;
				}
			}
		}
		
		char Devuelve_Copia(int limite){
			return vector_copia[limite];
		}
		
};

int main(){
	const char terminador = '#';
	char caracter;
	Descodifica descodifica;
	
	cout << "Introduzca la secuencia que desea descodificar: ";
	caracter=cin.get();
	
	while(caracter!=terminador){
		descodifica.Aniade(caracter);
		caracter=cin.get();
	}
	
	descodifica.Descodificador();
	
	cout << "\nSu codigo descifrado es el siguiente: ";
	
	for(int i=0; i<descodifica.Total_Usados2();i++){
		cout << descodifica.Devuelve_Copia(i);
	}
}
