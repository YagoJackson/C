#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>



int main()
{
    float nota1, nota2, nota3, nota4, media;

    nota1=nota2=nota3=nota4=0;

    printf("==========Media dos alunos==========\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta  nota: ");
    scanf("%f", &nota4);

    media= (nota1+nota2+nota3+nota4)/4;
    printf("A sua media escolar foi: %.2f", media);

    if(media>=7)
    {
        printf("O aluno foi aprovado %2.f");
    }
    else
    {
        printf("O aluno foi reprovado %.1f");
    }
    return 0;
}
