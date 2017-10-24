//Juan Sánchez Rodríguez

/*Recupere la solución del ejercicio 4. Defina el método Moda dentro de
la clase SecuenciaCaracteres. Este método debe devolver un dato de tipo
FrecuenciaCaracter (struct) Aplíquelo sobre el texto del Quijote sin espacios
en blanco.*/

#include <iostream>

using namespace std; 

struct FrecuenciaCaracter{
	char caracter;
	int frecuencia;
};

class SecuenciaCaracteres{
	private:
		static const int TAMANIO=1000;
		char vector[TAMANIO];
		FrecuenciaCaracter vector_respuesta[TAMANIO];
		int total_utilizados;
		int total_utilizados2;
		FrecuenciaCaracter frecuencia;
		int frecuencia_maxima;
	public:
		SecuenciaCaracteres()
			:total_utilizados(0)
			{
			}
		
		int Total_Utilizados(){
			return total_utilizados;
		}
		
		int Total_Utilizados2(){
			return total_utilizados2;
		}
		
		int Frecuencia_Maxima(){
			return frecuencia_maxima;
		}
		
		void Aniade(char elemento){
			if(total_utilizados<TAMANIO){
				vector[total_utilizados]=elemento;
				total_utilizados++;
			}
		}
		
		void Orden(){
			total_utilizados2=0;
			bool sacarla;
			frecuencia_maxima=0;
			
			for(int i=0; i<total_utilizados;i++){
				sacarla=false;
				vector_respuesta[total_utilizados2].frecuencia=0;
				for(int j=0; j<i;j++){
					if(vector[j]==vector[i]){
						sacarla=true;
					}
				}
				if(!sacarla){
					vector_respuesta[total_utilizados2].caracter=vector[i];
					for(int j=i;j<total_utilizados;j++){
						if(vector[i]==vector[j]){
							vector_respuesta[total_utilizados2].frecuencia=vector_respuesta[total_utilizados2].frecuencia+1;
						}
					}
					total_utilizados2++;
				}
			}

			for(int i=0; i<total_utilizados2;i++){
				if(frecuencia_maxima<vector_respuesta[i].frecuencia&&vector_respuesta[i].caracter!=' '){
					frecuencia_maxima=vector_respuesta[i].frecuencia;
				}
			}
		}
		
		FrecuenciaCaracter Moda(int limite){
			return vector_respuesta[limite];
		}		
};

int main(){
	const char terminador = '#';
	char caracter;
	SecuenciaCaracteres secuencia;
	
	caracter=cin.get();
	while(caracter!=terminador){
		secuencia.Aniade(caracter);
		caracter=cin.get();
	}
	secuencia.Orden();
	
	cout << "\nLa MODA es:";
	
	for(int i=0;i<secuencia.Total_Utilizados2(); i++){
		if(secuencia.Frecuencia_Maxima()==secuencia.Moda(i).frecuencia){
			cout << "\n" << secuencia.Moda(i).caracter << " y su frecuencia es " << secuencia.Moda(i).frecuencia;
		}
	}
}
