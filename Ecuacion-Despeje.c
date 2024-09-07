/******************************************************************************
Luis Felipe Ramírez Torres
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int coeficiente1, coeficiente2;
    float x;
    printf("Dame un numero: ");
    scanf("%i",&coeficiente1);
    printf("Dame otro numero: ");
    scanf("%i",&coeficiente2);
    
    if(coeficiente1!=0)
    {
        x=-coeficiente1/(float)coeficiente2;
        printf("El resultado es %f ",x);
        
    }
    else
    {
        printf("La ecuacion no es realizable");
    }
    return 0;
}