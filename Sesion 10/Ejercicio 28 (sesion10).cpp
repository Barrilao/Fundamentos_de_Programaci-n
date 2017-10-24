//Juan Sánchez Rodríguez
/*Recupere la solución del ejercicio 10 de esta relación de problemas (población con
funciones). Re-escríbalo para que los cómputos relacionados con la población estén
encapsulados en una clase. La lectura de los valores en los rangos adecuados se hará
con las mismas funciones que ya se definieron en ese ejercicio. Modifique apropiadamente
el programa principal.*/

#include <iostream>  
using namespace std; 

int LeeIntRango(bool migracion) {
   int a_leer;
   const int LIMITE_SUPERIOR_TASA = 1000;
   
   if(migracion){
   	  	do{
     		cout << "Introduzca la tasa ";
     	 	cin >> a_leer;
 	  	}while(a_leer < - LIMITE_SUPERIOR_TASA || a_leer > LIMITE_SUPERIOR_TASA);
   	}
   	
   else{
   		do{
      		cout << "Introduzca la tasa ";
      		cin >> a_leer;
   		}while (a_leer < 0 || a_leer > LIMITE_SUPERIOR_TASA);
	}
   	return a_leer;
}

int LeeIntMayorIgualQue(){
   int a_leer;

   do{
      cout << "Introduzca la cifra ";
      cin >> a_leer;
   }while (0 > a_leer);

   return a_leer;
}

class Poblacion{
	private:
		int natalidad; 
		int mortalidad;
		int migracion;
		long long actual;
	public:
		Poblacion(double nat, double mort, double migr, double act){
			natalidad = nat;
			mortalidad = mort;
			migracion = migr;
			actual = act;
		}
		
		int Natalidad(){
			return natalidad;
		}
		
		int Mortalidad(){
			return mortalidad;
		}
		
		int Migracion(){
			return migracion;
		}
		
		long long Actual(){
			return actual;
		}
	
		long long Poblacion_Futura(double anios){
 	   	    int tasa_global = natalidad - mortalidad + migracion;
  	 		double IV_tasa_global = 1 + tasa_global / 1000.0;
   			long long poblacion_futura = actual;
   			int anio = 1;
   
   			while (anio <= anios){
    		    poblacion_futura = poblacion_futura * IV_tasa_global;
       			anio++;
	   		}
   
  			 return poblacion_futura;
		}
	
		int Numero_Anios(){
			int tasa_global = natalidad - mortalidad + migracion;
    		double IV_tasa_global = 1 + tasa_global / 1000.0;
			long long poblacion_objetivo = 2 * actual;
			long long poblacion_futura = actual;
    		int anios = 0;
   
    		while (poblacion_futura < poblacion_objetivo){
      			poblacion_futura = poblacion_futura * IV_tasa_global;
      			anios++;
   			}
   			return anios;
		}
};

int main(){
   long long poblacion_actual;
   int tasa_natalidad, tasa_mortalidad, tasa_migracion, numero_anios;
   bool migrar=false;
   
    cout << "Calculo de la poblacion futura.\n";
    cout << "\nPoblacion actual\n";
    poblacion_actual=LeeIntMayorIgualQue();
      
	cout << "\nNatalidad\n";
    tasa_natalidad=LeeIntRango(migrar);
   
  	cout << "\nMortalidad\n";
    tasa_mortalidad=LeeIntRango(migrar);
   
    migrar=true;
    cout << "\nMigracion\n";
	tasa_migracion=LeeIntRango(migrar);

	cout << "\nNumero de anios\n";
    numero_anios=LeeIntMayorIgualQue();
    
    Poblacion poblacion(tasa_natalidad, tasa_mortalidad, tasa_migracion, poblacion_actual);
  
	cout << "\n\nPoblacion futura pasados " << numero_anios << " anioos: "
         << poblacion.Poblacion_Futura(numero_anios);

    numero_anios = poblacion.Numero_Anios();
    
    cout << "\n\nPasaran " << numero_anios << " anios hasta llegar,"
        << "como minimo, al doble de la poblacion actual"
        << "\nLa poblacion a la que se llegara es: "
        << poblacion.Poblacion_Futura(numero_anios) << " habitantes";
   
  
}
