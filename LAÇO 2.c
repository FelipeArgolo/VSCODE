#include <stdint.h>
#include <stdio.h>

int main (){


    int i;
    int soma;
    int numero;

    soma = 0;

    for ( i = 1; i <= 5; i++)
    {
        printf ("DIGITE O %d NUMERO:",i);
        scanf("%d",&numero);

    
    soma += numero;    
    
    }
    
    printf ("VALOR TOTAL %d \n",soma);

}