#include <stdio.h>
#include <stdlib.h>


int main()
{

/*
 char= %c  string=%s
 int= %i ou %d
float e double = %f
%u modulo de numero
%p endereço da memoria
%e ou %E pra imprimir numero com conotacção cientifica
%% pra imprimir sinal de porcentagem

*/

    int i = 10;
    float f = 4.5;
    printf("%d \n", i);
    printf("%f \n", f);
    printf(" %d - %2.f \n ", i, f);
    return 0;

}
