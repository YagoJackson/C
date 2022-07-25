#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
/*

O laço de repetição do-while funciona de maneira semelhante ao laço de repetição "while". A diferença entre os dois é que o laço "while" só executa o bloco caso a condição seja verdadeira, enquanto que o laço de repetição do-while, ira primeiro executar o bloco de repetição e somente em seguida, irá verificar se a condição é ou não satisfeita.

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
