#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

/*
1-soma --> =+
2-subtração --> =-
3-multiplicação--> =*
4-divisão --> =/
5-resto --> =%

Há 2 operadores, o de incremento e o de decremento. O de incremento é representado por dois sinais de ( ++ ), enquanto o de decremento, por dois sinais de menos ( -- ).

++ - Incremento
-- - decremento
*/

int main()
{
    setlocale(LC_ALL,"");

    int num =1;

    printf("%d\n", num);
    printf("%d\n", ++num);//incrementa uma unidade antes
    printf("%d\n", num++);//incrementa uma unidade depóis 


    return 0;

}
