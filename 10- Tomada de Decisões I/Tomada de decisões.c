#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Digite uma letra minuscula: \n");
    scanf("%c", &c);
    if (c>='a');
    {
        printf("A letra que voce digitou em maiusculo seria: > %c <\n",
                 toupper(c) );
    }
    return 0;
}
