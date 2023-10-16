#include <stdlib.h>
#include <stdio.h>

int main (){

int i = 0;
float numero;
float soma = 0;
float media;


   
    do
    {
        printf ("digite o %d numero:", i+1);
        scanf("%f",&numero);    
    if (numero > 0)
    {
        soma +=numero;
        i++;
    }
    

    } while (numero > 0);
    
    media = soma / i;
    

    printf("media: %.2f \n ", media);





    
    
    
    
    
    

    return 0;
}