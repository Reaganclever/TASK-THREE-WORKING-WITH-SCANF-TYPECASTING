#include <stdio.h>
#include"TaskThreeProject.h"

double calculateAverageSales(double totalsales , int days){

double averageSales = totalsales * (double)days;
printf("\nNEWEST TOTAL SALES:\t%.2lf\n" , totalsales);
printf("NEWEST NO OF DAYS:\t%d\n" , days);
printf("----------\n");
printf("NEWEST AVERAGE SALES:\t%.2lf\n" , averageSales);

return averageSales;




}
