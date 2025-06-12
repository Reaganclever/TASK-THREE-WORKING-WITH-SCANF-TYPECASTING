#include <stdio.h>
#include"TaskThreeProject.h"

double computeCommissionCalculation(float salesVolume , double rate){


double commission = (double)salesVolume * rate;

printf("\nNEWEST SALES.VOLUME:\t%.2f\n" , salesVolume);
printf("NEWEST COMMISSION.RATE:%.2lf\n" , rate);
printf("---------------\n");
printf("NEWEST COMMISSION.AMOUNT:%.2lf\n" , commission);
return commission;

}



