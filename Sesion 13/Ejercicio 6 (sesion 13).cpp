//Juan Sánchez Rodríguez

/*Recupere la solución del ejercicio 5 (Moda) Elimine el método
NumeroOcurrencias y en su lugar defina el método
SecuenciaEnteros PosicionesOcurrencias
(char buscado, int izda, int dcha)
que devuelve las posiciones en las que se encuentra el elemento buscado.*/

#include <iostream>

using namespace std;

class SecuenciaEnteros{
	private:
		static const int TAMANIO=1000;
		char vector[TAMANIO];
		int total_utilizados;
		int vector2[TAMANIO];
		int total_utilizados2;
	public:
		SecuenciaEnteros()
			:total_utilizados(0)
			{
				total_utilizados2=0;
			}
		
		int Total_Utilizados(){
			return total_utilizados;
		}
		
		int Total_Utilizados2(){
			return total_utilizados2;
		}
		
		void Aniade(char elemento){
			if(total_utilizados<TAMANIO){
				vector[total_utilizados]=elemento;
				total_utilizados++;
			}
		}
		
		int PosicionesOcurrencias(char buscado, int izda, int dcha){
			int contador=0;
			
			for(int i=izda;i<=dcha;i++){
				if(vector[i]==buscado){
					contador++;
					vector2[total_utilizados2]=i;
					total_utilizados2++;
				}
			}
			return contador;
		}
		
		int DevuelveDatos(int posicion){
			return vector2[posicion];
		}
};

int main(){
	const char terminador ='#';
	char caracter, incognita;
	int min, max;
	SecuenciaEnteros secuencia;
	
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
	
	cout << "\nLa frecuencia de la letra " << incognita << " es " << secuencia.PosicionesOcurrencias(incognita,min,max);
	
	cout << "\nSe encuentran en las siguientes posiciones (suponiendo que la primera posición sea la posición 0) ";
	
	for(int i=0;i<secuencia.Total_Utilizados2();i++){
		cout << secuencia.DevuelveDatos(i) << " ";
	}
}

