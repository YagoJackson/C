#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
/*

O la�o de repeti��o do-while funciona de maneira semelhante ao la�o de repeti��o "while". A diferen�a entre os dois � que o la�o "while" s� executa o bloco caso a condi��o seja verdadeira, enquanto que o la�o de repeti��o do-while, ira primeiro executar o bloco de repeti��o e somente em seguida, ir� verificar se a condi��o � ou n�o satisfeita.

*/

int main()
{
    setlocale(LC_ALL,"");
    
    int cont = 0;
    char c;

    do
    {
        //contador recebe + 1
        cont++;
        printf("\tDigite o numero 0 para sair do contador\n");
        printf("%d- Quantidade de vezes \n", cont);
        scanf("%c", &c);
        //quando trabalhamos com tipo char as aspas sao simples 
    } while (c !='0');

    



    return 0;

}
