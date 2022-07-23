#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"");
    int x = 0;
    int vl = 0;

    printf("informe quantidade a ser repetida:\n");
    scanf("%d", &vl);

    while (x<vl)
    {
        printf("%d\n", x * 10);
        x=x+1;
    }
    
 return 0;

}
