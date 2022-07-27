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
    int num2 [] ={ 1,5,7,15,45};
    char vogais [5] = {'a','e','i','o','u'};
    float notas [3] = {1.5, 5.5, 10.5};

    for ( i = 0; i < 5; i++)
    
       printf("\n%d", num2[i]);


    for (i = 0; i < 5; i++)
    {
        printf("\t%c\n", vogais[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\t\t%.1f\n", notas[i]);
    }
    
    
    
    

    
    
    


    return 0;

}
