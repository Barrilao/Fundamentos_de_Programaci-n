//Juan Sánchez Rodríguez 

/*Modifique la solución del ejercicio 2 usando un
algoritmo más eficiente. Observe que no hace falta ordenar todo el vector, sino únicamente
considerar los datos que son mayores que la referencia.*/


#include <iostream>
using namespace std;

int main(){
   const int TERMINADOR = -1;
   double dato, referencia;
   const int TAMANIO                 =  1e5;
   double vector[TAMANIO], mayores_que[TAMANIO];
   int utilizados_vector, utilizados_mayores_que, k;
   

   cout << "k valores mayores que."
        << "\nIntroduzca reales con terminador "
        << TERMINADOR << "\n"
        << "Luego introduzca el valor de referencia y k.\n";
        
   utilizados_vector = 0;
   cin >> dato;

   while (dato != TERMINADOR && utilizados_vector < TAMANIO){
      vector[utilizados_vector] = dato;
      utilizados_vector++;
      cin >> dato;
   }

   cin >> referencia;
   cin >> k;

   int izda, j;
   double a_insertar;
   
   for (int i = 0; i < utilizados_vector; i++)
      mayores_que[i] = vector[i];

   
   utilizados_mayores_que = 0;

   for (int i = 0; i < utilizados_vector && utilizados_mayores_que < k; i++){
      a_insertar = vector[i];
      
      if (a_insertar >= referencia){
         mayores_que[utilizados_mayores_que] = a_insertar;
         utilizados_mayores_que++;
      }
   }
   

   for (int i = 0; i < utilizados_mayores_que; i++)
      cout << mayores_que[i] << " ";
}
