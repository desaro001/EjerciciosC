#include "stdio.h"
#define MAYORIA_EDAD 18

int main(int argc, char const *argv[])
{
    int edad=0;//Declaración e inicialización
    //int edad;//Declaración
    //edad = 0;//Inicialización
    printf("Introduce tu edad:");
    scanf("%d",&edad);
    if (edad>=MAYORIA_EDAD){
        printf("Eres mayor de edad");
    } else {
        printf("Eres menor de edad");
    }
    return 0;
}
