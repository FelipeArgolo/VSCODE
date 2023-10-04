#include <stdio.h>
#include <stdlib.h>

int main() {

// DECLARANDO VARIAVEL

int prato;
float preco;

// MOSTRANDO MENU PARA O USÚARIO

printf ("|1|       PICANHA      |  25.00$ | \n");
printf ("|2|       LASANHA      |  20.00$ | \n");
printf ("|3|      STROGONOFF    |  18.00$ | \n");
printf ("|4|    BIFE ACEBOLADO  |  15.00$ | \n");
printf ("|5|     PAO COM OVO    |  5.00$  | \n");
printf("\n");

// PEDINDO INFORMÇÕES PARA O USÚARIO

printf ("escolha o codigo correspondente ao prato que desejar:");
scanf ("%d",&prato);
printf("\n");

// ESTRUTURA DE ESCOLHA E MOSTRANDO OS DADOS

switch (prato)
{
    case 1:
    printf ("|1|  PRATO ESCOLHIDO FOI PICANHA  |\n",prato);
    printf("\n");
    printf ("|       TOTAL A PAGAR    | 25,00$ |\n",preco);
    break;
    case 2:
    printf ("|2|  PRATO ESCOLHIDO FOI LASANHA     |\n",prato);
    printf ("\n");
    printf ("|           TOTAL A PAGAR   | 20,00$ |\n",preco);
    break;
    case 3:
    printf ("|3|  PRATO ESCOLHIDO FOI STROGONOFF  |\n",prato);
    printf ("\n");
    printf ("|            TOTAL A PAGAR  | 18,00$ |\n",preco);
    break;
    case 4:
    printf ("|1|  PRATO ESCOLHIDO FOI BIFE ACEBOLADO  |\n",prato);
    printf ("\n");
    printf ("|              TOTAL A PAGAR    | 15,00$ |\n",preco);
    break;
    case 5:
    printf ("|1|  PRATO ESCOLHIDO FOI PAO COM OVO  |\n",prato);
    printf ("\n");
    printf ("|             TOTAL A PAGAR   | 5,00$ |\n",preco);
    break;
default:
 printf ("CODIGO DIGITADO INVALIDO");
    break;

return 0;
}










    return 0;
}