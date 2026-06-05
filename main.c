#include <stdio.h>
#include "operaciones.h"

int main() {

    int opcion;

    printf("=== CALCULADORA EN C ===\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("Seleccione una opcion: ");
    scanf("%d",&opcion);

    switch(opcion) {

        case 1:
            suma();
            break;

        case 2:
            resta();
            break;

        case 3:
            multiplicacion();
            break;

        default:
            printf("Opcion no valida\n");
    }

    return 0;
}