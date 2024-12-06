#include <stdio.h>

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
void numeros(int *a,int *b);

int main() {
    int opcion;
    int num1, num2, resultado;

    do {
        printf("\n=== Calculadora Basica ===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Salir\n");
        printf("Selecciona una opcion:  ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                resultado = sumar(0, 0);
                printf("Resultado de la suma: \n\n");
                break;

            case 2:
                resultado = restar(0, 0);
                printf("Resultado de la resta: \n\n");
                break;

            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado de la multiplicacion: \n\n");
                break;
            case 4:
                printf("Saliendo de la calculadora...\n\n");
                break;
            default:
                printf("Opcion no valida. Intenta de nuevo.\n\n");
                break;
        }
    } while (opcion != 4);
    return 0;
}

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

