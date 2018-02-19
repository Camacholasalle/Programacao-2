#include <stdio.h>
int main ()
{
    int vetor [10];
    int maior=0, i=0;

    for(i=0; i<=9; i++){
        printf("\n Digite os numeros: ");
        scanf("%d", &vetor[i]);
        if(vetor[i]>maior)
            maior=vetor[i];
        }

    //exibir na tela o maior valor lido.

    printf("\n maior valor = %d", maior);

    return 0;
}
