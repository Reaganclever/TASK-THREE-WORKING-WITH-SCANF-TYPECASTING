#include <stdio.h>
#include"TaskThreeProject.h"

double computeCommissionCalculation(float salesVolume , double rate){


double commission = (double)salesVolume * rate;

printf("\nSALES.VOLUME:\t%.2f\n" , salesVolume);
printf("COMMISSION.RATE:%.2lf\n" , rate);
printf("---------------\n");
printf("COMMISSION.AMOUNT:%.2lf\n" , commission);
return commission;

}



