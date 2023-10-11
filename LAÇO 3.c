#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int numero;
    int impar;
    int par;

     par = 0;
     impar = 0;

        for (i = 1; i <= 5; i++)
    {

        printf("DIGITE O NUMERO:", i);
        scanf("%d", & numero);

        if (numero % 2 == 0)
        {
            par++;
        }
        else if (numero % 2 == 1)
        {
            impar++;
        }
    }

    printf ("\n");
    printf("TOTAL DE NUMEROS PARES: %d \n", par);
    printf("\n");
    printf("TOTAL DE NUMEROS IMPARES: %d \n", impar);

return 0;

}