#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf ("\n");

    if (idade < 18 || idade > 65)
    {
        printf(" Voce nao e obrigado a votar:\n");
    }
    else
    {
        printf("voce e obrigado a votar:");
    }
    return 0;

    }