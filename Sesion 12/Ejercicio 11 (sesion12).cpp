//Juan Sánchez Rodríguez

/*Sobre la clase SecuenciaCaracteres, añada el método
EliminaOcurrencias para eliminar todas las apariciones de un determinado carácter
a_borrar.*/

#include <iostream>

using namespace std; 

class SecuenciaCaracteres{
	private:
		static const int TAMANIO=50;
		char vector[TAMANIO];
		int totalusados; 
	public:
		SecuenciaCaracteres()
			:totalusados(0)
		{
		}
		
		int Total_Usados(){
			return totalusados;
		}
		
		void Aniade(char nuevo){
			if (totalusados<TAMANIO){
				vector[totalusados]=nuevo;
				totalusados++;
			}
		}
		
		void Elimina(int posicion){
			if(posicion>=0 && posicion < totalusados){
				int tope=totalusados-1;
				for(int i=posicion; i < tope; i++){
					vector[i]=vector[i+1];
				}
				totalusados--;
			}
		}
		
		void EliminaOcurrencias(char a_borrar){
			for (int i = 0; i < totalusados; i++){
				if (vector[i] == a_borrar)
			 		Elimina(i);
		    }
		}
		
		char Devuelve(int limite){
			return vector[limite];
		}
};

int main(){
	const char terminador = '#';
	char caracter, quitar;
	SecuenciaCaracteres secuencia;
	
	cout <<"Introduce los caracteres ";
	caracter=cin.get();
	
	while (caracter!=terminador){
		secuencia.Aniade(caracter);
		caracter=cin.get();
		
	}
	
	cout << "\nIntroduzca el caracter a eliminar ";
	cin >> quitar;
	
	secuencia.EliminaOcurrencias(quitar);
	
	cout << "\n";
	
	for(int i=0; i<secuencia.Total_Usados();i++){
		cout << secuencia.Devuelve(i);
	}
}
