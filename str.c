#include <stdio.h> <string.h>
int stringInversa(char str[50])
{
    int i, cont, tam;

    tam=strlen(str);

    for(i=tam-1 ;i>=0; i--)

        printf("%c", str[i]);

    printf("\n");
}
int main ()
{
    char string[50];

    printf("\nDigite uma frase: ");
    gets(string);

    stringInversa(string);
    return 0;
}
