#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"");

    char c;

    printf("Digite um caracter:\n");
    c= getchar();

    

    if (c== '1')
    {
        printf("\nO caracter esta correto\n");
    }
    else
    {
        printf("\nO caracter e invalido.\n");
        printf("\nVocê digitou o caracter >%c<.\n");
    }
    
    
    

    return 0;

}
