
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>


/* o primeiro indice e sempre 0
Assim, para acessar os elementos de uma matriz temos:
0 0 - para acessar o elemento na linha zero e coluna zero.
1 0 - para acessar o elemento da linha um e coluna zero.
0 2 - para acessar o elemento da linha zero e coluna dois.
e assim por diante.
*/


int main()
{
    setlocale(LC_ALL,"");

    int i, j, mat[3][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

for(i = 0; i < 3; i++){ // índice das linhas
   
   
   for(j = 0; j < 3; j++) // índice das colunas
      
      printf("%d ", mat[i][j]);
   
   printf("\n"); // salta uma linha após a impressão de cada linha da matriz
}
    


    return 0;

}



