/******************************************************************************
Luis Felipe Ramírez Torres
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("Ingrese su edad: ");
    scanf("%i", &edad);
    if(edad<=3&edad>-1){
        printf("Eres un bebe");
    }
    else if(edad<12&edad>3){
        printf("Eres un niño");
    }
    else if(edad>=12&edad<18){
        printf("Eres un adolescente");
    }
    else if(edad>=18&edad<60){
        printf("Eres un adulto");    
    }
    else if(edad>=60){
        printf("Eres un adulto mayor");    
    }
    else{printf("Incorrecto");}
    return 0;
}