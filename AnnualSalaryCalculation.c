#include <stdio.h>
#include"TaskThreeProject.h"

double computeAnnualSalary(double hourlyWage , float hoursPerWeek , double weeksPerYear){
double annualSalary = hourlyWage * (double)hoursPerWeek * weeksPerYear;
printf("NEW HOURLY WAGE:\t%.2lf\n" , hourlyWage);
printf("NEW HOURS PER WEEK:\t%.2f\n" , hoursPerWeek);
printf("NEW WEEKS PER YEAR:\t%.2lf\n" , weeksPerYear);
printf("------------------------\n");
printf("NEW ANNUAL SALARY:\t%.2lf\n" , annualSalary);

}


