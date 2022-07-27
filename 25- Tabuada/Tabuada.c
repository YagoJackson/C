#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"");

    int tabuada=0;
    printf("=====================================\n");
    printf("\t *** TABUADA ***\n");
    printf("=====================================\n");
     printf("Informe qual a tabuada desejada: >>> ");
     scanf("%d", &tabuada);

     for (int x = 0; x <=10; ++x)
     {
        printf("\n%dx%d =%d\n", x, tabuada, x * tabuada);
     }
     
    


    return 0;

}
