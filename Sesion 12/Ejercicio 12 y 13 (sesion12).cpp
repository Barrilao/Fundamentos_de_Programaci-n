//Juan Sánchez Rodríguez

/*Sobre la clase SecuenciaCaracteres, añada
el método EliminaBloque para que borre todos los caracteres que haya entre dos
posiciones.*/

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
		
		void EliminaBloque(int menor, int mayor){
			for(int i=menor; i<=mayor;i++){              //Creo haberlo resuelto directamente como resulta que lo pide en el siguiente ejercicio (13)
				Elimina(menor);
			}
		}
		
		char Devuelve(int limite){
			return vector[limite];
		}
};

int main(){
	const char terminador = '#';
	char caracter, quitar;
	int izq, der;
	SecuenciaCaracteres secuencia;
	
	cout <<"Introduce los caracteres ";
	caracter=cin.get();
	
	while (caracter!=terminador){
		secuencia.Aniade(caracter);
		caracter=cin.get();
		
	}
	
	do{
		cout << "\nIntroduzca el intervalo a quitar ";
		cin >> izq;
		cin >> der;
	}while(der<izq);
	
	secuencia.EliminaBloque(izq,der);
	
	for(int i=0;i<secuencia.Total_Usados();i++){
		cout << secuencia.Devuelve(i);
	}
}
