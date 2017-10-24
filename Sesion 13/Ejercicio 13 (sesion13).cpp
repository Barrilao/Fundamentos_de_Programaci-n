//Juan Sánchez Rodríguez

/*Sobre la clase SecuenciaCaracteres
implemente el algoritmo Counting Sort para ordenar sus valores.
SecuenciaCaracteres CountingSort()
El método no modificará las componentes del vector privado sino que debe construir
una secuencia nueva y devolverla. El algoritmo funciona de la siguiente forma:
 Calcular los valores mínimo y máximo del vector. Por ejemplo, si el vector contiene
c b b a b c c a g c b g c
el mínimo es 'a' y el máximo 'g'.
 Construir un vector local de frecuencias con los conteos de todos los caracteres
que hay entre el mínimo y el máximo. Con el ejemplo anterior, el vector de conteos
será
2 4 5 0 0 0 2
que corresponden a las frecuencias de las letras que hay entre 'a' y 'g'.
 Recorrer el vector de frecuencias almacenando cada carácter tantas veces como
indique su frecuencia (2 veces el 'a', cuatro veces el 'b', etc)
a a b b b b c c c c c g g
Este método sólo ordena los valores de la secuencia que hay entre un carácter
izquierda y otro carácter derecha. Por ejemplo, si izquierda = 'b' y
derecha = 'g' el resultado sería la siguiente secuencia:
b b b b c c c c c g g
Debe llamar a este método dentro de CountingSort().*/

#include<iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAMANIO=100;
		char vector[TAMANIO];
		int total_utilizados;
		int vector_contador[TAMANIO];
		int total_contador;
		char vector_copia[TAMANIO];
		int total_copia;
		char vector_counting[TAMANIO];
		int total_counting;
	public:
		SecuenciaCaracteres()
			:total_utilizados(0)
			{
				total_counting=0;
				total_copia=0;
				total_contador=0;
				for(int i=0;i<TAMANIO;i++){
					vector_contador[i]=0;
				}
			}
			
		int Total_Utilizados(){
			return total_utilizados;
		}
		
		int Total_Contador(){
			return total_contador;
		}
		
		int Total_Copia(){
			return total_copia;
		}
		
		int Total_Counting(){
			return total_counting;
		}
		
		char Minimo(){
			return vector[0];
		}
		
		char Maximo(){
			return vector[total_utilizados-1];
		}
		
		void Aniade(char elemento){
			if(total_utilizados<TAMANIO){
				vector[total_utilizados]=elemento;
				total_utilizados++;
			}
		}
		
		void Ordenar(){
			char temp;
			for(int i=0; i < total_utilizados;i++){
				for(int j=0;j<total_utilizados-1;j++){
					if(vector[j]>vector[j+1]){
						temp=vector[j];
						vector[j]=vector[j+1];
						vector[j+1]=temp;
					}
				}
			}
		}
		
		void Contador(){
			for(char i = 'a';i<=vector[total_utilizados-1];i++){
				for(int j=0;j<total_utilizados;j++){
					if(i==vector[j]){
						vector_contador[total_contador]=vector_contador[total_contador]+1;
					}
				}
				total_contador++;
			}
		}
		
		void Dar_Vueltas_Absurdas(){
			for(int i=0;i<total_contador;i++){
				if(vector_contador!=0){
					for(int j=0;j<vector_contador[i];j++){
						char suma='a'+i;
						vector_copia[total_copia]=suma;
						total_copia++;
					}
				}
			}
			
		}
		
		void CountingSortEntre(char min,char max){
			for(int i=0;i<total_utilizados;i++){
				if(vector[i]>=min&&vector[i]<=max){
					vector_counting[total_counting]=vector[i];
					total_counting++;
				}
			}
		}
		
		char Devuelve(int lugar){
			return vector[lugar];
		}	
		
		int Devuelve_cifras(int lugar){
			return vector_contador[lugar];
		}
		
		char Devuelve_copia(int lugar){
			return vector_copia[lugar];
		}
		
		char Devuelve_countig(int lugar){
			return vector_counting[lugar];
		}
};

int main(){
	char caracter, izq, der;
	const char TERMINADOR='#';
	SecuenciaCaracteres secuencia;
	
	cout << "Introduzca la frase ";
	caracter = cin.get();
	
	while(caracter!=TERMINADOR){
		secuencia.Aniade(caracter);
		caracter = cin.get();
	}
	
	secuencia.Ordenar();
	secuencia.Contador();
	
	cout << "\nEl minimo es " << secuencia.Minimo() << ", y el maximo es "<< secuencia.Maximo();
	cout << "\nEl numero de veces que aparece cada palabra es ";

	
	for(int i=0;i<secuencia.Total_Contador();i++){
		cout << secuencia.Devuelve_cifras(i) << " ";
	}
	
	secuencia.Dar_Vueltas_Absurdas();
	
	cout << "\nEl vector despues de darle el millon de vueltas pertinente es ";
	
	for(int j=0;j<secuencia.Total_Copia();j++){
		cout << secuencia.Devuelve_copia(j);
	}
	
	cout << "\nIntroduzca el minimo y el maximo para el counting ";
	cin >> izq;
	cin >> der;
	
	secuencia.CountingSortEntre(izq,der);
	
	cout << "\nCounting Sort es ";
	
	for(int k=0;k<secuencia.Total_Counting();k++){
		cout << secuencia.Devuelve_countig(k);
	}
}
