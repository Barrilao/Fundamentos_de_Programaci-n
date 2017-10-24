//Juan Sánchez Rodríguez

#include<iostream>
#include<string>

using namespace std;


class SecuenciaEnteros{
	private:
		static const int TAMANIO=100;
		int vector[TAMANIO];
		int total_utilizados;
	public:
		SecuenciaEnteros()
		 :total_utilizados(0){
		 }
		 
		int Total_Utilizados(){
			return total_utilizados;
		}
		
		void Aniade(int numero){
			if(total_utilizados<TAMANIO){
				vector[total_utilizados]=numero;
				total_utilizados++;
			}
		}
		
		int Devuelve_Vector(int posicion){
			return vector[posicion];
		}
		
		void Elimina_Vector(){
			total_utilizados=0;
		}
};

class TablaRectangularEnteros{
	private:
		static const int TAMANIO=100;
		int matriz_privada[TAMANIO][TAMANIO];
		int total_filas, total_columnas;
	public:
		TablaRectangularEnteros()
		 :total_filas(0),total_columnas(0)
		{	
		}
		
		void Total_Filas(int n_filas){
			total_filas=n_filas;
		}
		
		void Total_Columnas(int n_columnas){
			total_columnas=n_columnas;
		}
		
		int Numero_Filas(){
			return total_filas;
		}
		
		int Numero_Columnas(){
			return total_columnas;
		}
		
		void Aniade(int cifra, int fila, int columna){
			matriz_privada[fila][columna]=cifra;
		}
		
		int Que_Hay_Dentro(int fila, int columna){
			return matriz_privada[fila][columna];
		}
		
		SecuenciaEnteros Fila(int a_buscar){
			SecuenciaEnteros fila;
			for(int i=0;i<total_columnas;i++){
				fila.Aniade(matriz_privada[a_buscar][i]);
			}
			return fila;
		}
		
		void Aniade_Fila(SecuenciaEnteros nueva){
			int total_nueva=nueva.Total_Utilizados();
			if(total_nueva==total_columnas){
				for(int i=0;i<total_nueva;i++){
					matriz_privada[total_filas+1][i]=nueva.Devuelve_Vector(i);
				}
				total_filas++;
			}
			
		}
		
		TablaRectangularEnteros Transpuesta(){
			TablaRectangularEnteros transpuesta;
			for(int i=0;i<total_filas;i++){
				for(int j=0;j<total_columnas;j++){
					transpuesta.Aniade(matriz_privada[i][j],j,i);
				}
			}
			transpuesta.Total_Filas(total_columnas);
			transpuesta.Total_Columnas(total_filas);	
			return transpuesta;
		}
		
		bool Iguales(TablaRectangularEnteros otra){
			bool son_iguales;
			
			son_iguales=otra.Numero_Columnas()==total_columnas&&otra.Numero_Filas()==total_filas;
			
			for(int i=0;i<total_filas&&son_iguales;i++){
				for(int j=0;j<total_columnas&&son_iguales;j++){
					son_iguales=matriz_privada[i][j]==otra.Que_Hay_Dentro(i,j);
				}
			}
			return son_iguales;
		}
		
		bool Simetrica(){
			return Iguales(Transpuesta());
		}
		
		
		TablaRectangularEnteros Multiplicacion(TablaRectangularEnteros trans){
			TablaRectangularEnteros multi;
			int producto;
			for(int i=0;i<total_filas;i++){
				for(int j=0;j<trans.Numero_Columnas();j++){
					producto=0;
					for(int k=0;k<total_columnas;k++){
						producto=producto+matriz_privada[i][k]*trans.Que_Hay_Dentro(k,j);
					}
					multi.Aniade(producto,i,j);
				}
			}
			multi.Total_Filas(total_columnas);
			multi.Total_Columnas(total_columnas);
			return multi;
		}
		
		string ToString(){
      		string cadena;
      		
     		cadena.reserve(total_filas * total_columnas);
      
      		for (int i=0; i<total_filas; i++){
        		cadena.push_back('\n');

		        for (int j=0; j<total_columnas; j++){
            		cadena.append(to_string(matriz_privada[i][j]);
            		cadena.append(" ");
         		}
      		}	

      		return cadena;
   		}
};

int main(){
	int filas,columnas,numero;
	TablaRectangularEnteros tabla;
	TablaRectangularEnteros transpu;
	TablaRectangularEnteros multiplicada;
	
	cout << "Introduzca el numero de filas y de columnas ";
	cin >> filas;
	cin >> columnas;
	
	tabla.Total_Filas(filas);
	tabla.Total_Columnas(columnas);
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout << "\nIntroduzca el valor de la matriz en la posicion " << i << j << " ";
			cin >> numero;
			tabla.Aniade(numero,i,j);
		}
	}
	
	transpu=tabla.Transpuesta();
	multiplicada=tabla.Multiplicacion(transpu);
	bool simetria=tabla.Simetrica();
	
	if(simetria)
		cout << "\nEs simetrica ";
	
	else
		cout << "\nNo es simetrica ";
		
	cout <<"\n\nLa tabla original es:\n" << tabla.ToString();
	cout <<"\n\nLa tabla transpuesta es:\n" << transpu.ToString();
	cout <<"\n\nLa tabla multiplicada es:\n" << multiplicada.ToString();
}
