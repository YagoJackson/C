#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

 /*
    Associação da esquerda pra direita
    1- ()
    2- *, /, %
    3- +,-
    4- <, <=, >, >=
    5- ==, !=    */


    /*
    associação da direita pra esquerda
    1- --, ++
    2- =, +=,-=, *=, /=, %=

    a = b = c = 1;
    */

int main()
{
    setlocale(LC_ALL,"");
    
   int a, b, c;
   a=(b=(c=1));
   printf("%d\n", a);
   printf("%d\n", b);
   printf("%d\n", c);
   



    return 0;

}
