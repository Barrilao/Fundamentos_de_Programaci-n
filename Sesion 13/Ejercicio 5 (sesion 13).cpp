//Juan Sánchez Rodríguez

/*Recupere la solución del ejercicio 10 de la relación de problemas IV (Moda).
Re-escriba el método Moda de la siguiente forma:
 Use como dato local para guardar los caracteres procesados un objeto de la clase
SecuenciaCaracteres, en vez de un vector clásico de corchetes.
 Defina dentro de la clase SecuenciaCaracteres el método
int NumeroOcurrencias(char buscado, int izda, int dcha)
que devuelve el número de ocurrencias de un valor buscado entre las posiciones
izda y dcha de la secuencia. Llame a este método dentro de Moda para calcular
las frecuencias de cada carácter.*/

#include <iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAMANIO=1000;
		char vector[TAMANIO];
		int total_utilizados;
	public:
		SecuenciaCaracteres()
			:total_utilizados(0)
			{
			}
		
		int Total_Utilizados(){
			return total_utilizados;
		}
		
		void Aniade(char elemento){
			if(total_utilizados<TAMANIO){
				vector[total_utilizados]=elemento;
				total_utilizados++;
			}
		}
		
		int NumeroOcurrencias(char buscado, int izda, int dcha){
			int contador=0;
			
			for(int i=izda;i<=dcha;i++){
				if(vector[i]==buscado)
					contador++;
			}
			return contador;
		}
};

int main(){
	const char terminador ='#';
	char caracter, incognita;
	int min, max;
	SecuenciaCaracteres secuencia;
	
	cout<< "Introduzca la palabra ";
	
	caracter=cin.get();
	
	while(caracter!=terminador){
		secuencia.Aniade(caracter);
		caracter=cin.get();
	}
	
	cout << "\nIntroduzca la letra y el intervalo a buscar ";
	cin >> incognita;
	cin >> min;
	cin >> max;
	
	cout << "\nLa frecuencia de la letra " << incognita << " es " << secuencia.NumeroOcurrencias(incognita,min,max);
}
