//Juan Sánchez Rodríguez

/*Utilice la definición de la clase SecuenciaDoubles disponible en
http://decsai.ugr.es/~carlos/FP/SecuenciaDoubles.cpp
Esta clase es análoga a SecuenciaCaracteres, pero trabaja con datos de tipo
double.
Defina un método que construya otro objeto de la misma clase SecuenciaDoubles
que contenga los k elementos ordenados mayores que un valor de referencia, según
lo indicado en el ejercicio 3 de la relación de problemas IV. Modifique el programa
principal de dicho ejercicio para que utilice la clase SecuenciaDoubles.*/

#include<iostream>

using namespace std;

class SecuenciaDoubles{
	private:
		static const int TAMANIO=100;
		double vector[TAMANIO];
		int total_utilizados;
		double vector_respuesta[TAMANIO];
		int utilizados_respuesta;
	public:
		SecuenciaDoubles()
			:total_utilizados(0)
			{
				utilizados_respuesta=0;
			}
		
		int Utilitados_Respuesta(){
			return utilizados_respuesta;
		}
		
		void Aniade(double elemento){
			if(total_utilizados<TAMANIO){
				vector[total_utilizados]=elemento;
				total_utilizados++;
			}
		}
		
		void Ordenar(){
			double temp;
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
		
		void Inscribir(int k, double numero){
			double a_inscribir;
			for(int i=0;i<total_utilizados;i++){
				a_inscribir=vector[i];
				if(a_inscribir>=numero&&utilizados_respuesta<=k){
					vector_respuesta[utilizados_respuesta]=a_inscribir;
					utilizados_respuesta++;
				}
			}
		}	
		
		double Respuesta(int posicion){
			return vector_respuesta[posicion];
		}
};

int main(){
	double num, list;
	int cantidad;
	const int TERMINADOR=-1;
	SecuenciaDoubles secuencia;
	
	cout << "Introduzca la lista de numeros ";
	cin >> list;
	
	while(list!=TERMINADOR){
		secuencia.Aniade(list);
		cin >> list;
	}
	
	secuencia.Ordenar();
	
	cout << "\nIntroduzca el numero a buscar y la cantidad de numeros mayores que el ";
	cin >> num;
	cin >> cantidad;
	
	secuencia.Inscribir(cantidad,num);
	
	for(int i=0;i<secuencia.Utilitados_Respuesta();i++){
		cout << secuencia.Respuesta(i) << " ";
	}
}
