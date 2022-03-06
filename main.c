/**
 * Calculadorav4.0:
 * estructura de datos: structs
 * bucles: sí
 * nuevas características:
 * -
 */
#include "stdio.h"


typedef struct {
    int operando1, operando2, resultado;
}T_OPERACION;

void mostrarMensajeBienvenida();
void mostrarMenu();
int leerOpcionMenu();
int validarOpcionMenu();
int leerOperando();
int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);
int dividir(int, int);
void mostrarResultado(int);
void mostrarMensajeDespedida();

int main(VOID) {
    int opcion;
    T_OPERACION operacion;

    mostrarMensajeBienvenida();

    do{
        /**
         * 1. Mostramos menú
         */
        mostrarMenu();
        /**
         * 2. En esta versión SÍ validamos los datos.
        */
        opcion = validarOpcionMenu();

        switch (opcion) {
            case 1:
                puts("Por favor, introduce el sumando 1:");
                operacion.operando1 = leerOperando();
                puts("Por favor, introduce el sumando 2:");
                operacion.operando2 = leerOperando();

                operacion.resultado = sumar(operacion.operando1, operacion.operando2);

                mostrarResultado(operacion.resultado);
                break;
            case 2:
                puts("Por favor, introduce el minuendo:");
                operacion.operando1 = leerOperando();
                puts("Por favor, introduce el sustraendo:");
                operacion.operando2 = leerOperando();

                operacion.resultado = restar(operacion.operando1, operacion.operando2);

                mostrarResultado(operacion.resultado);
                break;
            case 3:
                puts("Por favor, introduce el multiplicando:");
                operacion.operando1 = leerOperando();
                puts("Por favor, introduce el multiplicador:");
                operacion.operando2 = leerOperando();

                operacion.resultado = multiplicar(operacion.operando1,operacion.operando2);

                mostrarResultado(operacion.resultado);
                break;
            case 4:
                puts("Por favor, introduce el dividendo:");
                operacion.operando1 = leerOperando();
                puts("Por favor, introduce el divisor:");
                operacion.operando2 = leerOperando();

                if (operacion.operando2 == 0) {
                    puts("La división da como resultado infinito (división entre cero).");
                } else {
                    operacion.resultado = dividir(operacion.operando1, operacion.operando2);
                    mostrarResultado(operacion.resultado);
                }
                break;
            default: // Buena práctica pero totalmente innecesaria
                break;
        }
    } while(opcion != 5);

    mostrarMensajeDespedida();

    return 0;
}

void mostrarMensajeBienvenida() {
    puts("Os damos la bienvenida a Calculadorav3.");
}

void mostrarMenu() {
    puts("1. Sumar");
    puts("2. Restar");
    puts("3. Multiplicar");
    puts("4. Dividir");
    puts("5. Salir");
}

int leerOpcionMenu() {
    int opcion;
    puts("Por favor, elige una opción del menú (1-5):");
    scanf("%d", &opcion);
    return opcion;
}

int validarOpcionMenu() {
    int opcion;

    do {
        opcion = leerOpcionMenu();
    } while (!(opcion >= 1 && opcion <= 5));

    return opcion;
}

int leerOperando() {
    int operando;
    scanf("%d", &operando);
    return operando;
}

int sumar(int sumando1, int sumando2) {
    return sumando1 + sumando2;
}

int restar(int minuendo, int sustraendo) {
    return minuendo - sustraendo;
}

int multiplicar(int multiplicando, int multiplicador) {
    return multiplicando * multiplicador;
}

int dividir(int dividendo, int divisor) {
    return dividendo / divisor;
}

void mostrarResultado(int resultado) {
    printf("El resultado es:%d\n", resultado);
}

void mostrarMensajeDespedida() {
    puts("Gracias por usar la Calculadorav4");
}
