#include <stdio.h>
#include"TaskThreeProject.h"

double computeCommissionCalculation(float salesVolume , double rate){


double commission = (double)salesVolume * rate;

printf("\nNEW SALES.VOLUME:\t%.2f\n" , salesVolume);
printf("NEW COMMISSION.RATE:%.2lf\n" , rate);
printf("---------------\n");
printf("NEW COMMISSION.AMOUNT:%.2lf\n" , commission);
return commission;

}



