//Juan Sánchez Rodríguez

/*Dado un vector de caracteres que contiene un
mensaje cifrado, se pide construir otro vector nuevo con el mensaje descifrado. La
forma de descifrado consiste en coger la primera y última letra de cada palabra. Las
palabras están separadas por uno o más espacios en blanco o el final del vector. Si
la última palabra no tiene espacios en blanco a su derecha, se coge sólo el primer
carácter.*/

#include <iostream>

using namespace std;

class Descodifica{
	private:
		static const int TAMANIO=1000;
		char vector[TAMANIO];
		int total_usados;
		bool aprueba;
	public:
		Descodifica()
			:total_usados(0)
			{
			}
			
		int Total_Usados(){
			return total_usados;
		}
		
		bool Aprueba(){
			return aprueba;
		}
		
		void Aniade(char elemento){
			if(total_usados<TAMANIO){
				vector[total_usados]=elemento;
				total_usados++;
			}
		}
		
		char Descodificador(int posicion){
			if(posicion==0||vector[posicion+1]==' '||vector[posicion-1]==' '){
				aprueba=true;
				return vector[posicion];
			}
			else
				aprueba=false;
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
	
	cout << "\nSu codigo descifrado es el siguiente: ";
	
	for(int i=0; i<descodifica.Total_Usados();i++){
		descodifica.Descodificador(i);
		if(descodifica.Aprueba())
			cout << descodifica.Descodificador(i);
	}
}
