//Juan Sánchez Rodríguez

/*Se quiere calcular la moda de un vector de caracteres, es decir, el carácter
que más veces se repite.*/

#include <iostream>

using namespace std; 

struct FrecuenciaCaracter{
	char caracter;
	int frecuencia;
};

int main(){
	const char terminador = '#';
	const int TAMANIO=100;
	char vector[TAMANIO];
	int total_utilizados=0;
	char caracter;
	FrecuenciaCaracter vector_respuesta[TAMANIO];
	int total_utilizados2=0;
	bool sacarla;
	int frecuencia_maxima=0;
	
	caracter=cin.get();
	
	while(caracter!=terminador&&total_utilizados<TAMANIO){
		vector[total_utilizados]=caracter;
		total_utilizados++;
		caracter=cin.get();
	}
	
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
	
	cout << "\nLa MODA es:";
	
	for(int i=0;i<total_utilizados2; i++){
		if(frecuencia_maxima==vector_respuesta[i].frecuencia)
			cout << "\n" << vector_respuesta[i].caracter << " y su frecuencia es " << vector_respuesta[i].frecuencia;
	}
	
	
	
}
