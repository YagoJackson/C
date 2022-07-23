#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

/*

signed - números com sinal (positivos e negativos)
unsigned - números sem sinais
long - aumentar a capacidade de armazenamento
short - diminuir a capacidade de armazenamento


*/

int main()
{
    int i;
    unsigned short int u;

    printf("%i -> i \n", sizeof(i) );
    printf("%d -> u\n",sizeof(u) );
    return 0;
}
