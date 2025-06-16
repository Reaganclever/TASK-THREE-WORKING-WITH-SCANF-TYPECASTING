#include <stdio.h>
#include"TaskThreeProject.h"


double calculateTotalRevenue(double customer1 , float customer2 , double customer3){

double totalRevenue = customer1 + (double)customer2 + customer3;
printf("NEW CUSTOMER1:\t%.2lf\n" , customer1);
printf("CUREENT CUSTOMER2:\t%.2f\n" , customer2);
printf(" NEWCUSTOMER3:\t%.2lf\n" , customer3);
printf("------------------------\n");
printf("NEW TOTAL REVENUE:\t%.2lf\n" , totalRevenue);
return totalRevenue;

}

