//Juan Sánchez Rodríguez

/*Retome la solución del ejercicio 23 (población) de la Relación de Problemas II. Reescríbalo
usando las funciones LeeIntRango del ejercicio 4 para leer los valores
de las tasas y LeeIntMayorIgualQue del ejercicio 5 para leer el número de años
que sea positivo. Defina también sendas funciones para calcular los dos valores que
se piden en el ejercicio, a saber, el número de habitantes después de tres años y
el número de años que pasarán hasta doblar la población inicial. Intente diseñar las
funciones para que sean lo más generales posible*/

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

long long Poblacion_Futura(int natalidad, int mortalidad, int migracion, int anios, long long actual){
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

int Numero_Anios(int natalidad, int mortalidad, int migracion, long long actual){
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
  

    cout << "\n\nPoblacion futura pasados " << numero_anios << " anioos: "
         << Poblacion_Futura(tasa_natalidad, tasa_mortalidad, tasa_migracion, numero_anios, poblacion_actual);

    numero_anios = Numero_Anios(tasa_natalidad, tasa_mortalidad, tasa_migracion, poblacion_actual);
    
    cout << "\n\nPasaran " << numero_anios << " anios hasta llegar,"
        << "como minimo, al doble de la poblacion actual"
        << "\nLa poblacion a la que se llegara es: "
        << Poblacion_Futura(tasa_natalidad, tasa_mortalidad, tasa_migracion, numero_anios, poblacion_actual) << " habitantes";
   
  
}
