#include <stdio.h>
#define NUM_ELEMENTOS 5
int main(int argc, char const *argv[])
{
    //Alternativa
    int otrasEdades[] = {3,8,1,15,88};
    //Vector - Arrays
    int edades[NUM_ELEMENTOS];
    edades[0]=10;
    edades[1]=15;
    edades[2]=35;
    edades[3]=28;
    edades[4]=18;

    for (int i=0;i<NUM_ELEMENTOS;i++){
        printf("%d\n",edades[i]);
    }

    return 0;
}
