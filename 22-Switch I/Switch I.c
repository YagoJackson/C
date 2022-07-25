#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

/*
Como utilizar a instrução "switch"? A instrução switch desempenha um papel semelhante ao da instrução IF, porém, a mesma possui uma forma mais compacta e assim, acaba sendo muito indicado para as situações em que temos que verificar muitas situações. Por exemplo:
*/
/*switch (expressão)
{
case (expressão constante) :

    break;
    case(TRUE);

default;//não precisa colocar break */


int main()
{
    setlocale(LC_ALL,"");


    int i;

    printf("digite um valor entre 0 e 9\n:");
    scanf("%d",  &i);

    switch (i)
    {
    case 0:
        printf("A opição digitada foi 'zero'\n");
        break;

        case 1:
        printf("A opição digitada foi 'um'\n");
        break;

        case 2:
        printf("A opição digitada foi 'dois'\n");
        break;

        case 3:
        printf("A opição digitada foi 'tres'\n");
        break;

        case 4:
        printf("A opição digitada foi 'quatro'\n");
        break;

        case 5:
        printf("A opição digitada foi 'cinco'\n");
        break;

        case 6:
        printf("A opição digitada foi 'seis'\n");
        break;

        case 7:
        printf("A opição digitada foi 'sete'\n");
        break;

        case 8:
        printf("A opição digitada foi 'oito'\n");
        break;

        case 9:
        printf("A opição digitada foi 'nove'\n");
        break;

     default:// caso nenhum numero esteje na lista
        printf("opição default \n");
        
    }
    


    return 0;

}



