#include <stdio.h>
#include <stdlib.h>

/*

( == ) dois sinais de igual é utilizado para verificar a igualdade entre o operando a esquerda com o operando a direita
( != ) uma exclamação e um sinal de igual,  significa a diferença, ou seja, o valor lógico a ser retornado irá verificar se o operando a esquerda é diferente do operando a direita do operador lógico diferente.
*/
// ! e igual a expressão NOT


int main()
{
    int i;
    printf ("digite um numero !=5 \n");
    scanf("%i", &i);

    if (i==5)
    {
        printf("A expressao e:\n");
        printf("TRUE");

    }
    else
    {
        printf("A expressao e:\n");
        printf("FAUSE");
    }


    return 0;
}
