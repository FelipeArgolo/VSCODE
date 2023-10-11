#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    float nota;
    float soma=0;
    float media;

    for (i = 0; i < 3; i++)
    {
        do
        {
            printf("digite a %dª nota do aluno:", ++i);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        soma += nota;
    }

    media = soma / i;

    if (media >= 7)
    {

        
        printf("\n");
        printf("media: %.2f\n", media);
        printf("APROVADO\n");
    }
    else if (media >= 5)
    {
        printf("\n");
        printf("media: %.2f\n", media);
        printf("RECUPERACAO\n");
    }
    else 
    {
        printf("\n");
        printf("media: %.2f \n", media);
        printf("REPROVADO\n");
    }

    return 0;
}