#include "stdio.h"

int main(int argc, char const *argv[])
{
    //De 0 a 10
    for (int i=0;i<10;i++){
        printf("%d\n",i);
    }
    //De 0 a 10, de dos en dos
    for (int i=0;i<10;i=i+2){
        printf("%d\n",i);
    }
    //De 10 a 0
    for (int i=10;i>=0;i--){
        printf("%d\n",i);
    }
    //Bucle infinito
    for (;;){
        break;//Para que no sea infinito
    }

    return 0;
}

