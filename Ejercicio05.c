#include "stdio.h"
/*
1. Dolor de cabeza -> Nada
2. Dolor de cabeza + Fiebre -> Gripe
3. Dolor de cabeza + Fiebre + Vienes de China -> Coronavirus
*/
int main(int argc, char const *argv[])
{
    int dolorDeCabeza, fiebre, origenChina;
    printf("Te duele la cabeza? [0-No, 1-Si]");
    scanf("%d",&dolorDeCabeza);
    printf("Tiene fiebre? [0-No, 1-Si]");
    scanf("%d",&fiebre);
    printf("Vienes de China? [0-No, 1-Si]");
    scanf("%d",&origenChina);
    //Version Veronica
    if (dolorDeCabeza==1) {
        if (fiebre==1) {
            if (origenChina==1){
                prinf("Coronavirus");
            } else {
                prinf("Gripe");
            }
        } else {
            prinf("No tienes nada");
        }
    } else {
        printf("Estas fenomenal");
    }
    //Version Ramon
    /*
    if (origenChina==1 && fiebre==1 && dolorDeCabeza==1 ){
        prinf("Coronavirus");
    }
    else if (fiebre==1 && dolorDeCabeza==1){
        prinf("Gripe");
    } else if (dolorDeCabeza==1){
        prinf("No tienes nada");
    } else {
        prinf("Estas fenomenal");
    }
    */
    return 0;
}
