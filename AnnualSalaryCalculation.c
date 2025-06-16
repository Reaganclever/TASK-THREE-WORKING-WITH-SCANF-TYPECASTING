#include <stdio.h>
#include"TaskThreeProject.h"

double computeAnnualSalary(double hourlyWage , float hoursPerWeek , double weeksPerYear){
double annualSalary = hourlyWage * (double)hoursPerWeek * weeksPerYear;
printf("NEWEST HOURLY WAGE:\t%.2lf\n" , hourlyWage);
printf("UPDATED HOURS PER WEEK:\t%.2f\n" , hoursPerWeek);
printf("CURRENT WEEKS PER YEAR:\t%.2lf\n" , weeksPerYear);
printf("------------------------\n");
printf("FRESH ANNUAL SALARY:\t%.2lf\n" , annualSalary);

}


