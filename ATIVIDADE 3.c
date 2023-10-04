#include <stdio.h>
#include <stdlib.h>

// DECLARANDO VARIAVEL

int main()
{
    char nome[250];
    float primeiranota;
    float segundanota;
    float media;

    // PEDINDO OS DADOS PARA O USUARIO

    printf("informe seu nome:");
    gets(nome);

    printf("informe sua primeira nota:");
    scanf("%f", &primeiranota);

    printf("informe sua segunda nota:");
    scanf("%f", &segundanota);

    // CALCULO DA MÉDIA

    media = (primeiranota + segundanota) / 2 ;

    // EXIBINDO AS NOTAS

    system ("cls");

    printf("PRIMEIRA NOTA: %.2f \n", primeiranota);
    printf("SEGUNDA NOTA: %.2f  \n", segundanota);
    printf("MEDIA TOTAL: %.2f   \n", media);

    if (media >= 7)
    {
        printf("APROVADO");
    }
    else
    {
        printf("REPROVADO");
    }
    return 0;
}
