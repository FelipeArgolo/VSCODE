#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

int idade;
int codigo;
int trabalho;
int ano;
int tempo;
char resultado [500];

printf ("Digite seu codigo: \n");
scanf ("%d",&codigo);
printf("\n");

printf ("Digite o ano do seu nascimento \n:");
scanf ("%d",&ano);
printf ("\n");

printf ("Digite seu tempo de trabalho: \n");
scanf ("%d",&trabalho);
printf ("\n");

idade =  2023 - ano;
tempo =  2023 - trabalho;


if (idade >= 65 || tempo >= 30) {
    strcpy(resultado, "VOCE NAO PODE REQUERIR A APOSENTADORIA \n");
}
else { 
    strcpy (resultado, " VOCE PODE REQUERER A APOSENTADORIA \n");
}

system ("cls");

printf ("tempo de trabalho: %d \n", trabalho);
printf ("\n");
printf ("idade do usuario: %d \n", idade);
printf("\n");
printf ("codigo do usuario: %d \n", codigo);
printf ("\n");
printf (" resultado: %s \n",resultado);

return 0;

}
