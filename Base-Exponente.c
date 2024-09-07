/******************************************************************************

Luis Felipe Ramírez Torres
*******************************************************************************/
#include <stdio.h>

int main() 
{
    int base, expo;
    float resultado;

    printf("Dame la base: ");
    scanf("%i", &base);

    printf("Dame el exponente: ");
    scanf("%i", &expo);

    resultado = (float)base / expo;

    printf("El resultado de %i/%i es: %f\n", base, expo, resultado);

    return 0;
}