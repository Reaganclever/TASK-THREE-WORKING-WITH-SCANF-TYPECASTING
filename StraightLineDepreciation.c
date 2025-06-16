#include <stdio.h>
#include"TaskThreeProject.h"

void calculatestraightLineDepreciation(double assetCost , float residualValue , double UsefulLife){

double depreciation = (assetCost - residualValue) / UsefulLife;
printf("NEWEST ASSET COST:\t%.2lf\n" , assetCost);
printf("NEWEST RESIDUAL VALUE:\t%.2f\n" , residualValue);
printf("NEWEST USEFUL LIFE:\t%.2lf\n" , UsefulLife);
printf("-----------------------\n");
printf("NEWEST ANNUAL DEPRECIATION:\tUGX%.2lf\n" , depreciation);
}


