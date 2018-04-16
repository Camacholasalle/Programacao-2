/****************************************************
* Trab 2 : Numeros Primos
* Nome e Matricula: Lucas da Silva Camacho, 0050015258
* Professor: Alex Salgado
*****************************************************/
#include <stdio.h>

int main()
{
    int num, contador, resto;
    int opc;


    printf("Ola, meu nome eh Lucas da Silva Camacho e vou calcular numeros primos!\n\n");

     do{

    do
    {
    printf ("Entre com um numero inteiro: ");
    scanf ("%i", &num);
    }

    while (num <=0);


   for (contador = 1; contador <= num; contador ++ )
   {
       resto ++;
   }

   if (resto == 2 || num == 2)
   {
   printf ("\nEsse numero e' primo!!\n");
   }

   else
   {
       printf ("\nEsse numero nao e' primo!!\n");
   }

   printf ("Deseja continuar? (1-Sim/2-Nao)");
    scanf("%d", &opc);
}
    while (opc==1);

    if (opc ==2){
        printf("\nObrigado, ate a proxima! Para ver o meu codigo entre no link:https://github.com/LucasdaSilvaCamacho/Numeros-primos\n");}



 system ("pause");
}
