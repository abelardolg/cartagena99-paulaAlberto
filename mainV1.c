/**
 * Calculadorav1.0:
 * solo variables
 * sin validaciones
 * sin bucles
 * solo ejecuta una única vez la calculadora
 */
#include "stdio.h"


int main(VOID) {
    int opcion;
    int operando1, operando2, resultado;

    /**
     * 1. Mostramos menú
     */
    puts("1. Sumar");
    puts("2. Restar");
    puts("3. Multiplicar");
    puts("4. Dividir");
    puts("5. Salir");
    puts("Por favor, elige una opción:");
    scanf("%d", &opcion);

    /**
     * 2. En esta versión NO validamos los datos.
     * Asumimos que los datos que nos introduce el usuario son correctos
     */

    /**
     * 3. Preguntamos por la opción elegida
     * Optamos por la estrategia de preguntar de manera temprana si quiere salir.
     */
    if (opcion == 5) {
        puts("Gracias por usar la Calculadorav1");
        return 0;
    }

    switch (opcion) {
        case 1:
            puts("Por favor, introduce el sumando 1:");
            scanf("%d", &operando1);
            puts("Por favor, introduce el sumando 2:");
            scanf("%d", &operando2);
            resultado = operando1 + operando2;
            printf("La suma ha dado: %d", resultado);
            break;
        case 2:
            puts("Por favor, introduce el minuendo:");
            scanf("%d", &operando1);
            puts("Por favor, introduce el sustraendo:");
            scanf("%d", &operando2);
            resultado = operando1 - operando2;
            printf("La resta ha dado: %d", resultado);
            break;
        case 3:
            puts("Por favor, introduce el multiplicando:");
            scanf("%d", &operando1);
            puts("Por favor, introduce el multiplicador:");
            scanf("%d", &operando2);
            resultado = operando1 * operando2;
            printf("La multiplicación ha dado: %d", resultado);
            break;
        case 4:
            puts("Por favor, introduce el dividendo:");
            scanf("%d", &operando1);
            puts("Por favor, introduce el divisor:");
            scanf("%d", &operando2);
            resultado = operando1 / operando2;
            printf("La división ha dado: %d", resultado);
            break;

    }
}

