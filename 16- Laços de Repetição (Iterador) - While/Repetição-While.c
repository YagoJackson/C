#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main()

{

    
    setlocale(LC_ALL,"");
    int i=0;

    while (i<10)
    {
        
        printf("%i\n ", i++);
       
    }
    
    return 0;
}
