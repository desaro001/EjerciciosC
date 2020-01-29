#include <stdio.h>
#define NUM_ELEMENTOS 5

int main(int argc, char const *argv[])
{
    int numeros[NUM_ELEMENTOS];
    int total=0;//Declaración de variable

    for(int i=0;i<NUM_ELEMENTOS;i++){
        printf("Introduce el numero de la posicion %d:",i);
        scanf("%d",&numeros[i]);
    }
    
    for(int i=0;i<NUM_ELEMENTOS;i++){
        total = total + numeros[i];
    }

    printf("Total:%d",total);

    return 0;
}
