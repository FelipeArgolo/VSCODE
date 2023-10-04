#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARANDO AS VARIAVEIS
    
    int primeirovalor;
    int segundovalor;    
    int soma;
    float media;
    int produto;

    // PEDINDO OS DADOS 

    printf("DIGITE O PRIMEIRO NUMERO: \n");
    scanf("%d", &primeirovalor);
    printf("\n");
    
    printf("DIGITE O SEGUNDO VALOR: \n");
    scanf("%d", &segundovalor);
    printf ("\n");

    //CALCULO
    
    media = (primeirovalor + segundovalor) /2 ;
    produto = (primeirovalor * segundovalor);
    soma = (primeirovalor + segundovalor);

    // ESTRUTURA CONDICIONAL

    if (primeirovalor > segundovalor)
    {
        printf ("MAIOR VALOR: %d \n", primeirovalor);
        printf ("\n");
        printf ("MENOR VALOR: %d \n", segundovalor);
    }
    else if (segundovalor > primeirovalor)
    {
       printf("MAIOR VALOR E: %d \n", segundovalor);
       printf ("\n");
       printf("MENOR VALOR E: %d \n", primeirovalor);
       printf ("\n");
    }
    else if (primeirovalor == segundovalor)
    {
        printf ("VALORES DIGITADOS IGUAIS:");
        printf ("\n");
        printf ("PRIMEIRO VALOR: %d \n", primeirovalor);
        printf ("\n");
        printf ("SEGUNDO VALOR: %d \n", segundovalor);
        printf ("\n");
    }
   
    
//EXIBINDO OS DADOS PARA O USUARIO

printf ("MEDIA DOS NUMEROS: %2.f \n", media);
printf ("\n");
printf ("SOMA: %d \n", soma);
printf ("\n");
printf ("PRODUTO: %d \n", produto );

return 0;

}