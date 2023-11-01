#include <stdio.h>

int division (int a1, int b1 ){//declaramos la funcion que vamos a usar en el ejercicio
    int resultado=a1/b1;
}
int main(){
    int numero3=1;//incializamos los datos enteros y decimales
    int numero1=0;
    int numero2=2;
    float resultado;//declaramos este valor en flotante para obtener el valor decimal

    printf("Escriba el dato de entrada: ");//pedmos el ingreso del numero para poder saber que numero vamos a dividir
    scanf("%d",&numero1);

    resultado=numero1%numero2;//llamamos a la funcion para obtener el resultado de la division

    printf("El valor de salida es: %f ",resultado);//finalmente debemos obtener el valor de la division

 return 0;
}
