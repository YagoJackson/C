#include <stdio.h>
#include <stdlib.h>


int main()
{
   int num1, num2, soma, sub,mult,div;


   num1=60;
   num2=20;

    soma=num1+num2;

    printf("%d + %d = %d \n ", num1, num2, soma);

    sub = num1 - num2;

    printf("%d - %d = %d \n", num1 ,num2 ,sub);

    mult=num1*num2;

    printf("%d x %d = %d \n ", num1, num2, mult);

    div= num1/num2;

    printf("%d / %d = %d \n ", num1, num2, div);
    return 0;
}
