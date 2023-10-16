#include <stdio.h>
#include <stdint.h>

int main()
{

    int i = 0;
    int numero;
    float soma = 0;
    int pares;
    int impar;
    float media;
    int somapar = 0;
    float mediapar;

    do
    {
        printf("digite o %d numero:", i + 1);
        scanf("%d",&numero);

        if (numero > 0)
        {
         soma = soma + numero;
         i++;   
        }

        if (numero % 2 == 0)
        {
            pares++;
            somapar = somapar + numero;
        }
        else if (numero % 2 == 1)
        {
            impar++;
           
        }

    } while (numero != 0);

    media = soma / i;
    mediapar = somapar / pares;

    system ("cls");
    printf ("total de numeros pares %d \n", pares);
    printf ("total de numeros impares %d \n", impar);
    printf("media total: %.2f \n", media);
    printf("media total numero par: %.2f \n", mediapar);
  
    return 0;
}