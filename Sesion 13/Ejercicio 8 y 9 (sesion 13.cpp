//Juan Sánchez Rodríguez

/*Sobre la clase SecuenciaCaracteres, defina un
método que inserte otra secuencia a partir de una posición.
Implemente este método utilizando el método visto en clase que insertaba un único
carácter:void Inserta(int pos_insercion, char valor_nuevo)
Tendrá que llamar a este método para insertar, uno a uno, todos los caracteres de la
nueva secuencia.
Construya un programa para que lea los caracteres de la primera secuencia (hasta
el terminador #), los caracteres de la segunda (hasta el terminador #), la posición de
inserción e imprima el resultado de insertar la segunda dentro de la primera, a partir
de la posición indicada.
Observe que este algoritmo es bastante ineficiente ya que el algoritmo se reduce a la
ejecución de un bucle anidado en otro.En el ejercicio 9 se pide una versión eficiente.*/

#include<iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAMANIO=100;
		char vector[TAMANIO];
		int total_utilizados;
		int posicion;
	public:
		SecuenciaCaracteres()
			:total_utilizados(0)
			{
			}
		
		int Total_Utilizados(){
			return total_utilizados;
		}
		
		void Posicion(int dato){
			posicion=dato;
		}
		
		void Aniade(char elemento){
			if(total_utilizados<TAMANIO){
				vector[total_utilizados]=elemento;
				total_utilizados++;
			}
		}
		
		void Inserta(char elemento){
			for(int i=total_utilizados; i>posicion;i--){
				vector[i]=vector[i-1];
			}
			vector[posicion]=elemento;
			posicion++;
			total_utilizados++;
		}
		
		char Respuesta(int localizacion){
			return vector[localizacion];
		}
};

int main(){
	char caracter, aniadido;
	const char TERMINADOR='#';
	int lugar;
	SecuenciaCaracteres secuencia;
	
	cout << "Introduzca la frase ";
	caracter=cin.get();
	
	while(caracter!=TERMINADOR){
		secuencia.Aniade(caracter);
		caracter=cin.get();
	}
	
	cout << "\nIntroduzca la posicion y la frase a insertar ";
	cin >> lugar;
	secuencia.Posicion(lugar);
	aniadido=cin.get();
	
	while(aniadido!=TERMINADOR){
		secuencia.Inserta(aniadido);
		aniadido=cin.get();
	}
	
	cout << "\nLa frase modificada es ";
	for(int i=0;i<secuencia.Total_Utilizados();i++){
		cout << secuencia.Respuesta(i);
	}	
}
