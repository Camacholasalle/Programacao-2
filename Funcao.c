#include <stdio.h>

 void soma(float a, float b){

     float resultado;
     resultado= a+b;
     printf("Resultado: %.1f" , resultado);
}

int main(){

    float a, b;
    printf("Entre com o primeiro numero: ");
    scanf("%f" , &a);
    printf("Entre com o segundo numero: ");
    scanf("%f", &b);

    soma(a,b);

    return 0;
}
