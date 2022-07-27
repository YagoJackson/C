#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

//continue - interrompe um único ciclo (do laço de repetição)
//break - interrompe o laço de execução

int main()
{
    setlocale(LC_ALL,"");

    int x;
    
    for (x = 0; x <10; x++)
    {
        if (x==2)
        {
           printf("-\n", x);
           continue;
        }
        if (x==8)

        {
            printf("-\n", x);
            break;
        }
        printf("%d\n", x);
        
    }
    
    


    return 0;

}
