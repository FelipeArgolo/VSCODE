#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

setlocale (LC_ALL,"portuguese");

int dia;


printf("|1| DOMINGO |\n");
printf("|2| SEGUNDA |\n");
printf("|3|  TERCA  |\n");
printf("|4|  QUARTA |\n");
printf("|5|  QUINTA |\n");
printf("|6|  SEXTA  |\n");
printf("|7|  SABADO |\n");
printf ("\n");

printf ("ESCOLHA A SEMANA QUE DESEJAR:");
scanf("%d",&dia);
printf ("\n");


switch (dia)
{
case 2:
case 3:
case 4:
case 5:
case 6:
    printf ("|DIA ESCOLHIDO É UTIL|\n");
    break;
case 1:
case 7:
    printf ("|DIA ESCOLHIDO É FINAL DE SEMANA|\n");
    printf ("|         ELE NÃO É UTIL          |\n");
    break;
default:
printf ("|CÓDIGO DIGITADO É INVALIDO|");
    break;
}


    
    
    
    
    
    
    
    
    
    
    return 0;

}