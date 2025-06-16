#include <stdio.h>
#include"TaskThreeProject.h"

void calculatestraightLineDepreciation(double assetCost , float residualValue , double UsefulLife){

double depreciation = (assetCost - residualValue) / UsefulLife;
printf("ASSET COST:\t%.2lf\n" , assetCost);
printf("RESIDUAL VALUE:\t%.2f\n" , residualValue);
printf("USEFUL LIFE:\t%.2lf\n" , UsefulLife);
printf("-----------------------\n");
printf("ANNUAL DEPRECIATION:\tUGX%.2lf\n" , depreciation);
}


