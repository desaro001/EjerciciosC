#include <stdio.h>
#define NUM_FILAS 3
#define NUM_COLUMNAS 5
int main(int argc, char const *argv[])
{
    //3 categorías (alimentacion(0), moda(1), juguetes(2))
    //5 días de la semana (lunes-viernes)
    int ventas[3][5];
    //Poner a 0 todas las celdas    
    for (int fila=0;fila<NUM_FILAS;fila++){
        for (int col=0;col<NUM_COLUMNAS;col++){
            ventas[fila][col]=0;
        }
    }
    //Inicializar algunas celdas
    ventas[0][0]=10;
    ventas[1][2]=15;
    ventas[2][0]=31;
    ventas[2][3]=8;
    //Solicitar las ventas del martes en alimentación
    printf("Introduce las ventas del martes en alimentacion:");
    scanf("%d",&ventas[0][1]);
    //Mostrar toda la matriz
    for (int fila=0;fila<NUM_FILAS;fila++){
        for (int col=0;col<NUM_COLUMNAS;col++){
            printf("%d-",ventas[fila][col]);
        }
        printf("\n");
    }
    //Mostrar la suma de la tercera fila (fila 0)
    int total=0;
    for (int i=0;i<NUM_COLUMNAS;i++){
        total = total + ventas[0][i];
    }
    printf("Total:%d\n",total);
    return 0;
}
