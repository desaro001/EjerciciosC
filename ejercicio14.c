#include <stdio.h>

int x;

//tipo_del_retorno(void si no hay retorno) nombreFuncion(tipoArgumento nombreArgumento, ...);
void display(int x);
void funcion1(int a);
void funcion2(int *a);
int calcular(int o1, int o2, int *resultado);

int main(int argc, char const *argv[])
{
    int a1 = 5;
    int a2 = 3;
    funcion1(a1);
    funcion2(&a2);
    display(a1);
    display(a2);
    //Operación
    int resul=0;
    int ok = calcular(1,8,&resul);
    if (ok==0){
        display(resul);
    } else {
        printf("Ha ocurrido un error");
    }
    return 0;
}
//Paso de parámetros por valor
void funcion1(int a){
    a = 8;
}
//Paso de parámetros por referencia
void funcion2(int *a){
    *a = 8;
}
void display(int x){
    printf("%d\n",x);
}

int calcular(int o1, int o2, int *resultado){
    //printf("%d",*resultado);Muestra el contenido de la direccion de memoria resultado
    if (o1==0 || o2==0){
        return -1;
    }
    *resultado = o1 + o2;
    return 0;
}
