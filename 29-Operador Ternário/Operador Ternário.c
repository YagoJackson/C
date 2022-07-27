#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"");

    int num1,num2;

    printf("digite um numero:");
    scanf("%d", &num1);
/*
    if (num1 < 0)
    {
        num2 = 0;
    }
    else
    {
        num2 = num1;
    } */
    num2= (num1<0) ? 0: num1;// se o num1 e menor que 0 então(?) escreva 0 se não(:) num1
    
    printf(" o valor de num2 e %d:\n", num2);


    


    return 0;

}
