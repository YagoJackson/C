#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main()
{
    //scanf("tipo de entrada", &variavel que recebera );
    //scanf("%d", &num);

    int num;

    printf("digite um numero \n");
    scanf("%d", &num);
    printf("O numero digitado foi %d ", num);
   
    return 0;
}
