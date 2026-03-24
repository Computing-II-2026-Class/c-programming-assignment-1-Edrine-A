/* Name: SSEKYANZI EDRINE ALLAN */
/* Student Number: 25/U/BIO/030/GV */

#include <stdio.h>
int main(){
float distance, fuel_used, fuel_efficiency;

printf("Enter Distance (km):");
scanf("%f", &distance);

printf("Enter Fuel Used (litres):");
scanf("%f", &fuel_used);

fuel_efficiency = distance/fuel_used;
printf("Fuel Efficiency: %.2f km/l\n", fuel_efficiency);

return 0;

    
}