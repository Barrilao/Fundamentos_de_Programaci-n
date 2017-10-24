//Juan Sánchez Rodríguez
/*Recupere la solución del ejercicio 9 de esta relación de problemas (parking con
funciones). Re-escríbalo para que los cómputos relacionados con el cálculo de
la tarifa, estén encapsulados en una clase. Mantenga la definición de la función
MinutosEntreInstantes tal y como está. Modifique apropiadamente el programa
principal.*/

#include <iostream>  
using namespace std; 

int MinutosEntreInstantes (int hora_inicial, int minuto_inicial, int segundo_inicial,
                           int hora_final, int minuto_final, int segundo_final){
   const int SEGUNDOS_POR_MINUTO = 60, MINUTOS_POR_HORA = 60;
   int segundos_iniciales, segundos_finales, segundos_diferencia;
   
   segundos_iniciales = SEGUNDOS_POR_MINUTO * (hora_inicial * MINUTOS_POR_HORA   +
                                               minuto_inicial) +
                        segundo_inicial;

   segundos_finales   = SEGUNDOS_POR_MINUTO * (hora_final * MINUTOS_POR_HORA   +
                                               minuto_final) +
                        segundo_final;

   segundos_diferencia = segundos_finales - segundos_iniciales;

   return segundos_diferencia / SEGUNDOS_POR_MINUTO;
}

class Parking{
	private:
		int limite_tramo_1;
		int limite_tramo_2;
        int limite_tramo_3;
   	    int limite_tramo_4;
        double tarifa_tramo_1;
	    double tarifa_tramo_2;
        double tarifa_tramo_3;
		double tarifa_tramo_4;
        double tarifa_dia_completo;
        int minutos_estacionamiento;
    public:
    	Parking(int lim1,int lim2, int lim3, int lim4, double tar1, double tar2, double tar3, double tar4, double tardia, int min){
    		limite_tramo_1=lim1;
    		limite_tramo_2=lim2;
    		limite_tramo_3=lim3;
    		limite_tramo_4=lim4;
    		tarifa_tramo_1=tar1;
    		tarifa_tramo_2=tar2;
    		tarifa_tramo_3=tar3;
    		tarifa_tramo_4=tar4;
    		minutos_estacionamiento=min;
		}
		int Limite_tramo_1(){
			return limite_tramo_1;
		}
		
		int Limite_tramo_2(){
			return limite_tramo_2;
		}
		
		int Limite_tramo_3(){
			return limite_tramo_3;
		}
			
		int Limite_tramo_4(){
			return limite_tramo_4;
		}	
		
		double Tarifa_tramo_1(){
			return tarifa_tramo_1;
		}
		
		double Tarifa_tramo_2(){
			return tarifa_tramo_2;
		}
		
		double Tarifa_tramo_3(){
			return tarifa_tramo_3;
		}
		
		double Tarifa_tramo_4(){
			return tarifa_tramo_4;
		}
		
		int Minutos_Estacionamiento(){
			return minutos_estacionamiento;
		}
		
		double Tarifa (){
                  
  			int minutos_tramo_1, minutos_tramo_2, minutos_tramo_3, minutos_tramo_4;
   			double tarifa;
   			bool tiempo_limite_rebasado;
   
   			minutos_tramo_1 = 0;
   			minutos_tramo_2 = 0;
   			minutos_tramo_3 = 0;
   			minutos_tramo_4 = 0;

   			tiempo_limite_rebasado  = (minutos_estacionamiento > limite_tramo_4);

   			if (!tiempo_limite_rebasado){
      			if (minutos_estacionamiento < limite_tramo_1)
         			minutos_tramo_1 = minutos_estacionamiento;
      			else{
         			minutos_tramo_1 = limite_tramo_1;

         			if (minutos_estacionamiento < limite_tramo_2)
            			minutos_tramo_2 = minutos_estacionamiento - limite_tramo_1;
         			else{
            			minutos_tramo_2 = limite_tramo_2 - limite_tramo_1;

            			if (minutos_estacionamiento < limite_tramo_3)
               				minutos_tramo_3 = minutos_estacionamiento - limite_tramo_2;
           				else{
               				minutos_tramo_3 = limite_tramo_3 - limite_tramo_2;
               				minutos_tramo_4 = minutos_estacionamiento - limite_tramo_3;
            			}
         			}
      			}
   			}

  			if (tiempo_limite_rebasado)
      			tarifa = tarifa_dia_completo;
   			else
      			tarifa = minutos_tramo_1 * tarifa_tramo_1
             			+
             	 		minutos_tramo_2 * tarifa_tramo_2
             			+
               			minutos_tramo_3 * tarifa_tramo_3
               			+
               			minutos_tramo_4 * tarifa_tramo_4;

   			return tarifa;
		}		
};

int main(){   
   const int TERMINADOR_ENTRADA_DATOS = -1;
   int limite_tramo_1_parking_1, limite_tramo_2_parking_1, 
       limite_tramo_3_parking_1, limite_tramo_4_parking_1,
       limite_tramo_1_parking_2, limite_tramo_2_parking_2, 
       limite_tramo_3_parking_2, limite_tramo_4_parking_2;
       
   double tarifa_tramo_1_parking_1, tarifa_tramo_2_parking_1, 
          tarifa_tramo_3_parking_1, tarifa_tramo_4_parking_1,
          tarifa_tramo_1_parking_2, tarifa_tramo_2_parking_2, 
          tarifa_tramo_3_parking_2, tarifa_tramo_4_parking_2;
          
   double tarifa_dia_completo_parking_1, tarifa_dia_completo_parking_2;
   double tarifa_parking_1, tarifa_parking_2;
   double total_recaudado_parking_1, total_recaudado_parking_2;
   
   int hora_inicial, minuto_inicial, segundo_inicial;
   int hora_final, minuto_final, segundo_final;
   int minutos_estacionamiento;

   cout << "Parking.\n\n";
 
   cin >> limite_tramo_1_parking_1;
   cin >> limite_tramo_2_parking_1;
   cin >> limite_tramo_3_parking_1;
   cin >> limite_tramo_4_parking_1;
   cin >> tarifa_tramo_1_parking_1;
   cin >> tarifa_tramo_2_parking_1;
   cin >> tarifa_tramo_3_parking_1;
   cin >> tarifa_tramo_4_parking_1;
   cin >> tarifa_dia_completo_parking_1;
   cin >> limite_tramo_1_parking_2;
   cin >> limite_tramo_2_parking_2;
   cin >> limite_tramo_3_parking_2;
   cin >> limite_tramo_4_parking_2;
   cin >> tarifa_tramo_1_parking_2;
   cin >> tarifa_tramo_2_parking_2;
   cin >> tarifa_tramo_3_parking_2;
   cin >> tarifa_tramo_4_parking_2;
   cin >> tarifa_dia_completo_parking_2;
   
   total_recaudado_parking_1 = 0;
   total_recaudado_parking_2 = 0;
   
   cin >> hora_inicial;
   
   while (hora_inicial != TERMINADOR_ENTRADA_DATOS){     
      cin >> minuto_inicial;
      cin >> segundo_inicial;
   
      cin >> hora_final;
      cin >> minuto_final;
      cin >> segundo_final;
      
      minutos_estacionamiento = 
         MinutosEntreInstantes(hora_inicial, minuto_inicial, segundo_inicial,
                               hora_final, minuto_final, segundo_final);
      
      Parking parking1(limite_tramo_1_parking_1, limite_tramo_2_parking_1, 
                limite_tramo_3_parking_1, limite_tramo_4_parking_1,
                tarifa_tramo_1_parking_1, tarifa_tramo_2_parking_1, 
                tarifa_tramo_3_parking_1, tarifa_tramo_4_parking_1,
                tarifa_dia_completo_parking_1, 
                minutos_estacionamiento);
      
      Parking parking2(limite_tramo_1_parking_2, limite_tramo_2_parking_2, 
                limite_tramo_3_parking_2, limite_tramo_4_parking_2,
                tarifa_tramo_1_parking_2, tarifa_tramo_2_parking_2, 
                tarifa_tramo_3_parking_2, tarifa_tramo_4_parking_2,
                tarifa_dia_completo_parking_2, 
                minutos_estacionamiento);
                                   
      cout << "\nTarifa resultante con cada parking:\n" 
           << parking1.Tarifa() << "\n" << parking2.Tarifa()  << "\n"; 
      
      total_recaudado_parking_1 = total_recaudado_parking_1 + tarifa_parking_1;
      total_recaudado_parking_2 = total_recaudado_parking_2 + tarifa_parking_2;
      
      cin >> hora_inicial;
   }
   
   cout << "\nTotal recaudado en cada parking:\n"
        << total_recaudado_parking_1 << "\n"
        << total_recaudado_parking_2 << "\n";
}
