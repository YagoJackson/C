#include <stdio.h>
#include <stdlib.h>



int main()
{
    int num1, num2, soma, sub,mult;
    float div;

    printf("==========================\n");
    printf("X    CALCULADORA        X\n");
    printf("===========================\n");
    printf("Digite um numero\t");
    scanf("%d", &num1);
    printf("digite outro numero\t");
    scanf("%d",  &num2);

    soma=num1+num2;
    sub = num1-num2;
    mult=num1*num2;
    div= num1/num2;



    printf("%d + %d = %d \n ", num1, num2, soma);

    printf("%d - %d = %d \n", num1 ,num2 ,sub);

    printf("%d x %d = %d \n ", num1, num2, mult);

    printf("%d / %d = %.2f \n ", num1, num2, div);


    return 0;

}
