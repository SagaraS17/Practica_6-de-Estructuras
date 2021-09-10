//areaTriangulo

#include "librerias.h"

void areaTriangulo(void){
    char str[128];
    double area, base=0.0, altura=0.0;
    do{
        printf("Base = ?");
        fgets(str,128,stdin);
        base = fabs((double)atof(str));
        printf("Altura = ?");
        fgets(str,128,stdin);
        altura = fabs((double)atof(str));
    }while(base<EPS || altura<EPS);
    area = (base*altura)/2.0;
    printf("Area = %lf\n", area);
}