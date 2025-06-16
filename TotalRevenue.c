#include <stdio.h>
#include"TaskThreeProject.h"


double calculateTotalRevenue(double customer1 , float customer2 , double customer3){

double totalRevenue = customer1 + (double)customer2 + customer3;
printf("CUSTOMER1:\t%.2lf\n" , customer1);
printf("CUSTOMER2:\t%.2f\n" , customer2);
printf("CUSTOMER3:\t%.2lf\n" , customer3);
printf("------------------------\n");
printf("TOTAL REVENUE:\t%.2lf\n" , totalRevenue);
return totalRevenue;

}

