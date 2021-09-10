//principal.c

#include "librerias.h"

void areaCirculo(void);
void areaTriangulo(void);
void areaTrapecio(void);
void imprimirMenu(void);
void finPrograma(void);

int leerOpcion(void);

int main(void){
    int opcion=0;
    for(;;){
        imprimirMenu();
        opcion=leerOpcion();
        switch(opcion){
            case 1: areaCirculo();
                break;
            case 2: areaTriangulo();
                break;
            case 3: areaTrapecio();
                break;
            default:
                printf("No de opción inválido!\n");
        }
        if (opcion==4) break;
    }
    return 0;
}