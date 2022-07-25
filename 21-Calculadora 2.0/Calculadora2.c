#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

//A função getche() lê o caractere do teclado e permite que seja impresso na tela.
//A função getch() lê o caractere do teclado e não imprime na tela.

int main()
{
    setlocale(LC_ALL,"");
   int num1,num2,soma, sub,mult;
   double div;
    char not;

    printf("==========================\n");
    printf("X    CALCULADORA  2.0  X\n");
    printf("===========================\n");

    do
    {
        system("cls");
        
        printf("Digite um numero\t");
        scanf("%d",  &num1);
        printf("Digite outro numero\t");
        scanf("%d",  &num2);

        soma=num1+num2;
        sub = num1-num2;
        mult=num1*num2;
        div= num1/num2;
        
        printf("\n%d + %d =%.d\n", num1,num2,soma);
        printf("\n%d - %d =%d\n", num1,num2,sub);
        printf("\n%d * %d =%d\n", num1,num2,mult);
        printf("\n%d / %d =%.2f\n", num1,num2,div);
        printf("\n");
        printf("deseja continuar?[N/Y]\n");
        scanf("%c", &not);
        system("pause");// pausar o programa
        system("cls");//limpar para comecar de novo
        
    } while (not == 'n' );

    return 0;

}
