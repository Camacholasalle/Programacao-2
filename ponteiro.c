#include <stdio.h>

int main()
{
        printf("Numero de bytes do tipo int = %d\n", sizeof(int));
        printf("Numero de bytes do tipo float = %d\n", sizeof(float));
        printf("Numero de bytes do tipo char = %d", sizeof(char));

    //imprimir o endereço da variavel 'a'

    int a=10;
    int b=90;
    int c=12;

        int *p;
        p=&a;


        printf("\n\nO endereco da variavel 'a' = %d", &a);
        printf("\nO conteudo da variavel 'a' = %d", *p);

        *p=11;
        printf("\nO conteudo da variavel 'a' = %d", *p);
        a++;
        printf("\nO conteudo da variavel 'a' = %d", *p);


        printf("\n\nO endereco da variavel 'b' = %d", &b);
        printf("\nO endereco da variavel 'c' = %d", &c);

    p=&b;
    *p=*p+a;

        printf("\nO conteudo de 'b' = %d", *p);







    return 0;
}

