//Juan Sánchez Rodríguez
/*Recupere la solución del ejercicio 29 (Parking con una clase) Defina un struct llamado
InstanteTiempo para almacenar la hora, minutos y segundos que constituyen
un instante de tiempo. Cambie la definición de la función MinutosEntreInstates
y el programa principal para que trabaje con este tipo struct.*/

#include <iostream>  
using namespace std; 

struct InstanteTiempo{
	int hora;
	int minuto;
	int segundo;
};

int MinutosEntreInstantes (InstanteTiempo inicial, InstanteTiempo final){
   const int SEGUNDOS_POR_MINUTO = 60, MINUTOS_POR_HORA = 60;
   int segundos_iniciales, segundos_finales, segundos_diferencia;
   
   segundos_iniciales = SEGUNDOS_POR_MINUTO * (inicial.hora * MINUTOS_POR_HORA   +
                                               inicial.minuto) +
                        inicial.segundo;

   segundos_finales   = SEGUNDOS_POR_MINUTO * (final.hora * MINUTOS_POR_HORA   +
                                               final.minuto) +
                        final.segundo;

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
   InstanteTiempo tiempo_inicial, tiempo_final;
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
   
   cin >> tiempo_inicial.hora;
   
   while (tiempo_inicial.hora != TERMINADOR_ENTRADA_DATOS){     
      cin >> tiempo_inicial.minuto;
      cin >> tiempo_inicial.segundo;
   
      cin >> tiempo_final.hora;
      cin >> tiempo_final.minuto;
      cin >> tiempo_final.segundo;
      
      minutos_estacionamiento = 
         MinutosEntreInstantes(tiempo_inicial,tiempo_final);
      
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
      
      cin >> tiempo_inicial.hora;
   }
   
   cout << "\nTotal recaudado en cada parking:\n"
        << total_recaudado_parking_1 << "\n"
        << total_recaudado_parking_2 << "\n";
}
