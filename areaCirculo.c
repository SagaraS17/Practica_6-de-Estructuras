//areaCirculo.c

#include "librerias.h"
#include<math.h> 
//El compilador exige que se defina pow en este archivo
# define M_PI 3.14159265358979323846 
/*Necesario para definir pi pues el editor no reconoce M_PI*/

void areaCirculo(void){
    char str[128];
    double area, radio=0.0;
    do{
        printf("Radio = ?");
        fgets(str,128,stdin);
        radio = fabs((double)atof(str));
    }while (fabs(radio)<EPS);
    area = M_PI * pow(radio,2.0);
    printf("Area = %lf\n", area);
}