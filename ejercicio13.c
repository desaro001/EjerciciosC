#include <stdio.h>
#define DIMENSION 3
#define TRUE 1
#define FALSE 0

void inicializar();
void mostrarTablero();
void ponerFicha();
int hayTresEnRaya();

char tablero[DIMENSION][DIMENSION];

int main(int argc, char const *argv[])
{

    printf("***SUPER TRES EN RAYA***\n");
    inicializar();
    mostrarTablero();
    ponerFicha();
    return 0;
}

void inicializar()
{
    for (int fila = 0; fila < DIMENSION; fila++)
    {
        for (int col = 0; col < DIMENSION; col++)
        {
            tablero[fila][col] = '-';
        }
    }
}

void mostrarTablero()
{
    for (int fila = 0; fila < DIMENSION; fila++)
    {
        for (int col = 0; col < DIMENSION; col++)
        {
            printf("%c ", tablero[fila][col]);
        }
        printf("\n");
    }
}

void ponerFicha() {
    int fila, columna;
    for (int i = 0; i < 4; i++)
    {
        printf("J1: Introduce la fila:");
        scanf("%d", &fila);
        printf("J1: Introduce la columna:");
        scanf("%d", &columna);
        tablero[fila][columna] = 'X';
        mostrarTablero();
        if (hayTresEnRaya()==TRUE){
            printf("\nHA GANADO PLAYER 1");
            break;
        }

        printf("J2: Introduce la fila:");
        scanf("%d", &fila);
        printf("J2: Introduce la columna:");
        scanf("%d", &columna);
        tablero[fila][columna] = 'O';
        mostrarTablero();
        if (hayTresEnRaya()==TRUE){
            printf("\nHA GANADO PLAYER 2");
            break;
        }
    }

    if (hayTresEnRaya()==FALSE){
        printf("J1: Introduce la fila:");
        scanf("%d", &fila);
        printf("J1: Introduce la columna:");
        scanf("%d", &columna);
        tablero[fila][columna] = 'X';
        mostrarTablero();
        if (hayTresEnRaya()==TRUE){
                printf("\nHA GANADO PLAYER 1");
        }
    }
}

/*
Solo verifica si hay TRES EN RAYA en las filas.
*/
int hayTresEnRaya(){
    for (i=0;i<DIMENSION;i++){
        if (tablero[i][0]!='-' && tablero[i][0]==tablero[i][1] && tablero[i][0]==tablero[i][2]){
        return TRUE;
    }
    //TODO Verificar columnas y diagonales
    return FALSE;
}