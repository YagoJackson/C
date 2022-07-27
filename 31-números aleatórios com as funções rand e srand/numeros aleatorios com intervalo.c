#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include <time.h> //biblioteca para hora  do computador

int main()
{
    setlocale(LC_ALL,"");

    int i;
    int num [10];

    srand (time(NULL));// para gerar numeros aleatorios com o relogio do windows

    for (i = 0; i < 10; i++)
    num [i] = rand() % 100; //Para dar valores entre 0 e 99

      for (i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    
    
    


    return 0;

}
