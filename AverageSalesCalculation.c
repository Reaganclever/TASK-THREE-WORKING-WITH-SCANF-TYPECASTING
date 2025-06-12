#include <stdio.h>
#include"TaskThreeProject.h"

double calculateAverageSales(double totalsales , int days){

double averageSales = totalsales * (double)days;
printf("\nNEW TOTAL SALES:\t%.2lf\n" , totalsales);
printf("NEW NO OF DAYS:\t%d\n" , days);
printf("----------\n");
printf("NEW AVERAGE SALES:\t%.2lf\n" , averageSales);

return averageSales;




}
