#include <stdio.h>
#include"TaskThreeProject.h"

double computeAnnualSalary(double hourlyWage , float hoursPerWeek , double weeksPerYear){
double annualSalary = hourlyWage * (double)hoursPerWeek * weeksPerYear;
printf("HOURLY WAGE:\t%.2lf\n" , hourlyWage);
printf("HOURS PER WEEK:\t%.2f\n" , hoursPerWeek);
printf("WEEKS PER YEAR:\t%.2lf\n" , weeksPerYear);
printf("------------------------\n");
printf("AANUAL SALARY:\t%.2lf\n" , annualSalary);

}


