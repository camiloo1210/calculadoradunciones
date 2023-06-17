#include <stdio.h>

int suma(int n1, int n2) {
    return n1 + n2;
}

int resta(int n1, int n2) {
    return n1 - n2;
}

int division(int n1, int n2) {
    return n1 / n2;
}

int multiplicacion(int n1, int n2) {
    return n1 * n2;
}

int main() {
    int n1; // Primer valor que ingresa el usuario
    int n2; // Segundo valor que ingresa el usuario
    int opcion; // Número para saber qué operación se va a realizar

    printf("Ingrese el valor 1: ");
    scanf("%i", &n1);

    printf("Ingrese el valor 2: ");
    scanf("%i", &n2);

    printf("¿Qué operación desea realizar entre los anteriores números?\n");
    printf("1-Suma\n");
    printf("2-Resta\n");
    printf("3-División\n");
    printf("4-Multiplicación\n");
    scanf("%i", &opcion);

    switch (opcion) {
        case 1: // Suma
            printf("La suma de sus valores es %i\n", suma(n1, n2));
            break;

        case 2: // Resta
            printf("La resta de sus valores es %i\n", resta(n1, n2));
            break;

        case 3: // División
            if (n2 != 0) {
                printf("La división de sus valores es %i\n", division(n1, n2));
            } else {
                printf("No se puede dividir entre 0\n");
            }
            break;

        case 4: // Multiplicación
            printf("La multiplicación de sus valores es %i\n", multiplicacion(n1, n2));
            break;

        default:
            printf("Número no aceptado\n");
            break;
    }

    return 0;
}

