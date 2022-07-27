#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

 //estrutura "for" é especializada em executar um bloco de instruções por um número pré-definido de vezes, por exemplo:
// for(parte1;part2;part3)
// 1-inialização
// 2- condição
// 3- atualização


int main()
{
    setlocale(LC_ALL,"");

    int cont;
    for (cont= 0; cont <= 10; cont++)
    {
        printf("%d\n", cont);
    }
    
    


    return 0;

}
