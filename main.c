/**
 * Calculadorav3.0:
 * estructura de datos: solo variables
 * bucles: sí
 * nuevas características:
 * abstraccion procedimental (funciones y procedimientos)
 */
#include "stdio.h"

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
    int operando1, operando2, resultado;

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
                operando1 = leerOperando();
                puts("Por favor, introduce el sumando 2:");
                operando2 = leerOperando();

                resultado = sumar(operando1, operando2);

                mostrarResultado(resultado);
                break;
            case 2:
                puts("Por favor, introduce el minuendo:");
                operando1 = leerOperando();
                puts("Por favor, introduce el sustraendo:");
                operando2 = leerOperando();

                resultado = restar(operando1, operando2);

                mostrarResultado(resultado);
                break;
            case 3:
                puts("Por favor, introduce el multiplicando:");
                operando1 = leerOperando();
                puts("Por favor, introduce el multiplicador:");
                operando2 = leerOperando();

                resultado = multiplicar(operando1,operando2);

                mostrarResultado(resultado);
                break;
            case 4:
                puts("Por favor, introduce el dividendo:");
                operando1 = leerOperando();
                puts("Por favor, introduce el divisor:");
                operando2 = leerOperando();

                if (operando2 == 0) {
                    puts("La división da como resultado infinito (división entre cero).");
                } else {
                    resultado = dividir(operando1, operando2);
                    mostrarResultado(resultado);
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
    puts("Gracias por usar la Calculadorav3");
}
