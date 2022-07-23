#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>


int main()

// &&
// (TRUE) && (TRUE)
{
    int i=40;
    int condicao = (i>20) && (i<100);
    printf("%d\n E:" , condicao);
    printf("%d\n NOT E:", !condicao);


// ||
// (TRUE) || (FALSE)-->1
// (FALSE) || (TRUE)-->1
// (TRUE) || (TRUE) -->1
// (FALSE) || (FALSE) -->0
    system("cls");

    int x=10;
    int cond=0;

    cond= (x==10) ||(x<1);
    printf("OU: %d \n ", cond);
    cond= (x==0) ||(x!=1);
    printf("OU: %d \n ", cond);
    cond= (x==10) ||(x!=0);
    printf("OU: %d \n ", cond);
    cond= (x!=10) ||(x==0);
    printf("OU: %d \n ", cond);


    return 0;


}
