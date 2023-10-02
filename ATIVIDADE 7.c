#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

// DECLARANDO AS VARIAVEIS

  int maiorvalor;
  int menorvalor;
  int primeironumero;
  int segundonumero;
  int terceironumero;  

// PEDINDO OS DADOS 

printf ("digite o primeiro numero:");
scanf ("%d",&primeironumero);
printf ("\n");

printf ("digite o segundo numero:");
scanf ("%d",&segundonumero);
printf("\n");

printf ("digite o terceiro numero:");
scanf ("%d",&terceironumero);
printf("\n");

// INDETIFICANDO MAIOR E MENOR NÚMERO

maiorvalor = primeironumero > segundonumero ? primeironumero : segundonumero;
maiorvalor = maiorvalor > terceironumero ? maiorvalor : terceironumero;

menorvalor = primeironumero < segundonumero ? primeironumero : segundonumero;
menorvalor = menorvalor < terceironumero ? menorvalor : terceironumero; 

system ("cls");

// EXIBINDO O COD

printf ("primeiro numero: %d \n",primeironumero);
printf ("\n");
printf ("segundo numero: %d \n",segundonumero);
printf ("\n");
printf ("terceiro numero: %d \n",terceironumero);
printf ("\n");
printf ("maior valor: %d \n",maiorvalor);
printf("\n");
printf ("menor valor: %d \n", menorvalor);

return 0;

}
