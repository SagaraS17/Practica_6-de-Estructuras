//areaTrapecio

#include "librerias.h"

void areaTrapecio(void){
    double area, b1=0.0, b2=0.0, altura=0.0;
    char str[128];
    do{
        inicio:
            printf("Base mayor= ?");
            fgets(str,128,stdin);
            b1 = fabs((double)atof(str));
            printf("Base menor= ?");
            fgets(str,128,stdin);
            b2 = fabs((double)atof(str));
            printf("Altura = ?");
            fgets(str,128,stdin);
            altura = fabs((double)atof(str));
        if (b1<b2) goto inicio;
    }while(b2<=EPS || altura<=EPS);
    area = ((b1+b2)*altura)/2.0;
    printf("Area = %lf\n", area);
}