/******************************************************************************
Luis Felipe Ramírez Torres
*******************************************************************************/
#include <stdio.h>

#define EURO 21.34

int main() {
    float Pesos_Euros;
    float Euros;

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &Pesos_Euros);

    Euros = Pesos_Euros / EURO;  

    printf("La cantidad en Euros es: %f\n", Euros);

    return 0;
}