#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_MAXIMO 10
#define NUMERO_INTENTOS 5

int getRandom();

int main(int argc, char const *argv[])
{
    //Obtener el numero aleatorio
    int numeroAleatorio = getRandom();
    int numeroAdivino;
    do {
        printf("Introduce un numero:");
        scanf("%d",&numeroAdivino);
    } while (numeroAdivino != numeroAleatorio);// != Distinto (operador lógico)
    printf("Eres un adivino");
    return 0;
}

int getRandom() {
    int aleatorio;
    srand(time(NULL));
    aleatorio = rand() % NUMERO_MAXIMO;// % OPERADOR MÓDULO
    return aleatorio;
}
