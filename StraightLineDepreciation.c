#include <stdio.h>
#include"TaskThreeProject.h"

void calculatestraightLineDepreciation(double assetCost , float residualValue , double UsefulLife){

double depreciation = (assetCost - residualValue) / UsefulLife;
printf("NEW ASSET COST:\t%.2lf\n" , assetCost);
printf("NEW RESIDUAL VALUE:\t%.2f\n" , residualValue);
printf("NEW USEFUL LIFE:\t%.2lf\n" , UsefulLife);
printf("-----------------------\n");
printf("NEW ANNUAL DEPRECIATION:\tUGX%.2lf\n" , depreciation);
}


