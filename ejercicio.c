#include <stdio.h>

int division (int a1, int b1 ){
    int resultado=a1/b1;
}
int main(){
    int numero3=1;
    int numero1=0;
    int numero2=2;
    float resultado;

    printf("Escriba el dato de entrada: ");
    scanf("%d",&numero1);

    resultado=numero1%numero2;

    printf("El valor de salida es: %f ",resultado);

 return 0;
}