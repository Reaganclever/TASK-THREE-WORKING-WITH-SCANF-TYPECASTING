#include <stdio.h>
#include"TaskThreeProject.h"

double calculateAverageSales(double totalsales , int days){

double averageSales = totalsales * (double)days;
printf("\nTOTAL SALES:\t%.2lf\n" , totalsales);
printf("NO OF DAYS:\t%d\n" , days);
printf("----------\n");
printf("AVERAGE SALES:\t%.2lf\n" , averageSales);

return averageSales;




}
