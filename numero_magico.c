/******************************************************************************
Luis Felipe Ramírez Torres

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, numero_magico, intentos;
    intentos=1;
    srand(time(NULL));
    numero_magico = rand() % 100;

    printf("Dame un numero: ");
    scanf("%i", &numero);

    while (numero != numero_magico) {
        if (numero < numero_magico) {
            printf("El numero es más alto que eso\n");
            intentos=intentos+1;         
        } else if (numero > numero_magico) {
            printf("El numero es más bajo que eso\n");
            intentos=intentos+1;
        }

        printf("\nDame un numero: ");
        scanf("%i", &numero);
    }

    printf("Ganaste, tu numero era %i\n", numero_magico);
    printf("Lo lograste en %d intentos", intentos);

    return 0;
}