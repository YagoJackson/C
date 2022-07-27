#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"");

    int i;
    int num [10];

    for (i = 0; i < 10; i++)
    {
        printf("\n%d° - ", i);
        scanf("%d", &num[i]);
    }

    printf ("\n\n");
      for (i = 0; i < 10; i++)
    {
        printf("%d\t ", num[i]);
    }
    
    
    


    return 0;

}
