#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"");

    for (int a = 0, b=10; a <= 10; ++a, --b)//variavel declarada dentro do for
    {
        printf("%d", a);
        printf(" - ");
        printf("%d\n", b);
    }
    

    return 0;

}
