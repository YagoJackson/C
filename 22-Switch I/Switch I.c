#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

/*
Como utilizar a instru��o "switch"? A instru��o switch desempenha um papel semelhante ao da instru��o IF, por�m, a mesma possui uma forma mais compacta e assim, acaba sendo muito indicado para as situa��es em que temos que verificar muitas situa��es. Por exemplo:
*/
/*switch (express�o)
{
case (express�o constante) :

    break;
    case(TRUE);

default;//n�o precisa colocar break */


int main()
{
    setlocale(LC_ALL,"");


    int i;

    printf("digite um valor entre 0 e 9\n:");
    scanf("%d",  &i);

    switch (i)
    {
    case 0:
        printf("A opi��o digitada foi 'zero'\n");
        break;

        case 1:
        printf("A opi��o digitada foi 'um'\n");
        break;

        case 2:
        printf("A opi��o digitada foi 'dois'\n");
        break;

        case 3:
        printf("A opi��o digitada foi 'tres'\n");
        break;

        case 4:
        printf("A opi��o digitada foi 'quatro'\n");
        break;

        case 5:
        printf("A opi��o digitada foi 'cinco'\n");
        break;

        case 6:
        printf("A opi��o digitada foi 'seis'\n");
        break;

        case 7:
        printf("A opi��o digitada foi 'sete'\n");
        break;

        case 8:
        printf("A opi��o digitada foi 'oito'\n");
        break;

        case 9:
        printf("A opi��o digitada foi 'nove'\n");
        break;

     default:// caso nenhum numero esteje na lista
        printf("opi��o default \n");
        
    }
    


    return 0;

}



