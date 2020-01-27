#include "stdio.h"

/*
Las constantes se nombran en mayúsculas, separadas las
palabras por _
Ejemplo: NUMERO_DIAS_TOTALES
*/
#define PI 3.1415926 //Constante

int main(int argc, char const *argv[])
{
    //Enteros
    short diasPorMes=0;//1 byte, -128,127
    int i=0;//2 bytes, Lo normal (-32.000, 32000)
    long l=0;//4 bytes
    //Decimales
    float f=0.0;//4 bytes, Lo normal
    double d=0.0;//8 bytes
    //Alfanuméricos
    char c='a';//Un carácter //1 byte
    char cadena[] = "Esto es una cadena";

    diasPorMes = 10;//Al ser variable, puede cambiar de valor

    printf("%d\n",diasPorMes);
    printf("%d\n",i);
    printf("%d\n",l);
    printf("%f\n",f);
    printf("%f\n",d);
    printf("%c\n",c);

    return 0;
}
