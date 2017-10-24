//Juan Sánchez Rodríguez

/*Esta nueva versión del programa, además de los datos ya pedidos en dicho ejercicio,
se le pedirá al usuario que introduzca un número de años (será el último dato leído)
Debe leer cada dato con un filtro conveniente. Por ejemplo, las tasas de natalidad,
mortalidad y emigración deben ser enteros entre 0 y 1000, mientras que la población
inicial debe ser un entero positivo.
El programa debe calcular e imprimir el número total de habitantes transcurridos dichos
años.
Además, el programa también calculará el número de años que tienen que pasar
hasta que haya, como mínimo, el doble de la población inicial. Imprima dicho número
de años, junto con la población que habrá pasado ese tiempo.*/

#include <iostream>  
#include <cmath>

using namespace std; 

int main(){  

   long long poblacion_actual, poblacion_futura;
   int tasa_natalidad, tasa_mortalidad, tasa_migracion, tasa_global, anios, n, contador;
   double indice_variacion_tasa_global;
   n=0;
   contador=0;
   
   cout << "Calculo de la poblacion futura.";
   
   do{
   cout << "\n\nIntroduzca la poblacion actual: ";
   cin  >> poblacion_actual; 
   }while(poblacion_actual<=0);
   
   do{
   cout << "\nIntroduzca la tasa de natalidad: ";
   cin  >> tasa_natalidad;
   }while(tasa_natalidad<=0||tasa_natalidad>=1000);
   
   do{
   cout << "\nIntroduzca la tasa de mortalidad: ";
   cin  >> tasa_mortalidad;
   }while(tasa_mortalidad<=0||tasa_mortalidad>=1000);
   
   do{
   cout << "\nIntroduzca la tasa de migracion: ";
   cin  >> tasa_migracion;
   }while(tasa_migracion<=0||tasa_migracion>=1000);
	
	cout << "\nIntroduzca los anios; ";
	cin >> anios;



   tasa_global = tasa_natalidad - tasa_mortalidad + tasa_migracion;
   indice_variacion_tasa_global = 1 + tasa_global / 1000.0;  
   poblacion_futura = poblacion_actual; 
                        
   do{
    poblacion_futura = poblacion_futura * indice_variacion_tasa_global;       
 	n++ ;
   	}while(n<=anios);
   
    cout << "\nPoblacion futura, pasados " << anios << " anios: " << poblacion_futura;
    
    poblacion_futura = poblacion_actual; 
     
    do{
    poblacion_futura = poblacion_futura * indice_variacion_tasa_global; 
    contador++;	
	}while(poblacion_futura<poblacion_actual*2);
	
	
	cout << "\nTiene que pasar " << contador << " anios para que consiga el doble de poblacion y la poblacion sera " << poblacion_futura;
     
}
