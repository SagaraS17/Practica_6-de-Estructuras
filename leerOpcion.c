//leerOpcion.c

#include "librerias.h"

int leerOpcion(void){
    char str[128];
    int n;
    printf("N=? ");
    fgets(str,128,stdin);
    n=(int)atoi(str);
    return n;
}