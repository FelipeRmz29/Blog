/******************************************************************************
Luis Felipe Ramírez Torres
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float calificacion; // Declaramos la variable

    printf("Dame tu nota final: ");
    scanf("%f", &calificacion);

    if(calificacion >= 6)
    {
        printf("Aprobaste\n");
    }
    else
    {
        printf("No aprobaste\n");
    }

    return 0;
}