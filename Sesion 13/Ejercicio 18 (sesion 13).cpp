//Juan Sánchez Rodríguez

/*Sobre la clase SecuenciaCaracteres, añada un método
EliminaExcesoBlancos para eliminar el exceso de caracteres en blanco, es
decir, que sustituya todas las secuencias de espacios en blanco por un sólo espacio.
Por ejemplo, si la secuencia original es (' ','a','h',' ',' ',' ','c'), que
contiene una secuencia de tres espacios consecutivos, la secuencia resultante debe
ser (' ','a','h',' ','c').*/

#include<iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAMANIO=100;
		char vector[TAMANIO];
		int total_utilizados;
		int vector_contador[TAMANIO];
		int total_contador;
	public:
		SecuenciaCaracteres()
			:total_utilizados(0)
			{
				total_contador=0;
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
		
		void Elimina(int posicion){
			if (posicion>=0&&posicion<total_utilizados){
				int tope=total_utilizados-1;
				for(int i=posicion;i<tope;i++){
					vector[i]=vector[i+1];
				}
				total_utilizados--;
			}	
		}
		
		void EliminaExcesoBlancos(){
			for(int i=0;i<total_utilizados;i++){
				if(vector[i]==' '&&vector[i+1]==' '){
					vector_contador[total_contador]=i-total_contador;
					total_contador++;
				}
			}
			
			for(int j=0;j<total_contador;j++){
				Elimina(vector_contador[j]);
			}
		}
		
		char Devuelve(int posicion){
			return vector[posicion];
		}
};

int main(){
	char caracter;
	const char TERMINADOR='#';
	SecuenciaCaracteres secuencia;
	
	cout << "Introduzca la frase ";
	caracter = cin.get();
	
	while(caracter!=TERMINADOR){
		secuencia.Aniade(caracter);
		caracter = cin.get();
	}
	
	secuencia.EliminaExcesoBlancos();
	
	cout << "La secuencia con espacios reducidos es ";
	
	for(int i=0;i<secuencia.Total_Utilizados();i++){
		cout << secuencia.Devuelve(i);
	}
	
}
