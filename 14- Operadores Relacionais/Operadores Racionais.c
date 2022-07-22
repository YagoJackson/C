#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
int main()
{
    int idade=0, idJ=17, idI=60;

        printf("Digite a idade da pessoa:\n");
        scanf("%d", &idade);
        if (idade<=idJ)
         {
            printf("A pessoa e um jovem.\n");
         }
         else
         {

            if(idade>=idI)
            {

                printf("A pessoa e um idoso.\n");
             }
             else
             {
                if((idade>=idJ)&&(idade<=idI))
                {
                    printf("A pessoa e de meia idade.");
                }
             }
        }

    return 0;
}
