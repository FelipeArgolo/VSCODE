#include <stdio.h>
#include <stdlib.h>

int main()
{

    // DECLARANDO VARIAVEL

    int numero;

    // PEDINDO DADOS

    printf("DIGITE SUA PRIMEIRA NOTA:");
    scanf("%i", &numero);

    // EXIBINDO DADOS DO USUARIO

    system("cls");

    printf("NUMERO: %i \n", numero);
    printf ("\n");

    if (numero == 10)

    {
        printf("O NUMERO E MAIOR QUE 10:! \n");
    }
    else
    {
        printf("O NUMERO E MENOR QUE 10:! \n");
    }
    
return 0;

}

