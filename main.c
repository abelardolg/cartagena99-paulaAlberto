/**
 * Calculadorav2.0:
 * estructura de datos: solo variables
 * bucles: sí
 * nuevas características:
 * ejecución repetitiva del menú
 * con validaciones
 */
#include "stdio.h"


int main(VOID) {
    int opcion;
    int operando1, operando2, resultado;

    do{
        /**
         * 1. Mostramos menú
         */
        puts("1. Sumar");
        puts("2. Restar");
        puts("3. Multiplicar");
        puts("4. Dividir");
        puts("5. Salir");

        /**
         * 2. En esta versión SÍ validamos los datos.
        */
        do {
            puts("Por favor, elige una opción del menú (1-5):");
            scanf("%d", &opcion);
        } while (!(opcion >= 1 && opcion <= 5));

        switch (opcion) {
            case 1:
                puts("Por favor, introduce el sumando 1:");
                scanf("%d", &operando1);
                puts("Por favor, introduce el sumando 2:");
                scanf("%d", &operando2);
                resultado = operando1 + operando2;
                printf("La suma ha dado: %d\n", resultado);
                break;
            case 2:
                puts("Por favor, introduce el minuendo:");
                scanf("%d", &operando1);
                puts("Por favor, introduce el sustraendo:");
                scanf("%d", &operando2);
                resultado = operando1 - operando2;
                printf("La resta ha dado: %d\n", resultado);
                break;
            case 3:
                puts("Por favor, introduce el multiplicando:");
                scanf("%d", &operando1);
                puts("Por favor, introduce el multiplicador:");
                scanf("%d", &operando2);
                resultado = operando1 * operando2;
                printf("La multiplicación ha dado: %d\n", resultado);
                break;
            case 4:
                puts("Por favor, introduce el dividendo:");
                scanf("%d", &operando1);
                puts("Por favor, introduce el divisor:");
                scanf("%d", &operando2);
                if (operando2 == 0) {
                    puts("La división da como resultado infinito (división entre cero).");
                } else {
                    resultado = operando1 / operando2;
                    printf("La división ha dado: %d\n", resultado);
                }
                break;
            default: // Buena práctica pero totalmente innecesaria
                break;
        }
    } while(opcion != 5);

    puts("Gracias por usar la Calculadorav2");
    return 0;
}

