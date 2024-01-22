#include <stdio.h>

int main() {
    int NUM, LimiteSuperior = 100000;

    do {
        printf("Ingrese un número positivo: ");
        scanf("%d", &NUM);

        if (NUM <= 0) {
            printf("El número ingresado debe ser mayor que cero.\n");
        } else if (NUM > LimiteSuperior) {
            printf("El número ingresado supera el límite superior permitido.\n");
        }

    } while (NUM <= 0 || NUM > LimiteSuperior);

    printf("Números perfectos entre 1 y %d:\n", NUM);
    int ContadorPerfectos = 0;
    int i = 2;

    while (i <= NUM) {
        int SumaDivisores = 1;
        int j = 2;

        while (j <= i / 2) {
            if (i % j == 0) {
                SumaDivisores += j;
            }
            j++;
        }

        if (SumaDivisores == i) {
            printf("%d\n", i);
            ContadorPerfectos++;
        }

        i++;
    }

    printf("Cantidad de números perfectos encontrados: %d\n", ContadorPerfectos);

    return 0;
}
