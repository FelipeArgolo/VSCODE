#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

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
case 1:
    printf("|1|     DOMINGO     |\n");
    printf("|1| FINAL DE SEMANA |");
    break;
case 2:
    printf("|2| SEGUNDA  |\n");
    printf("|2| DIA UTIL |\n");
    break;
case 3:
    printf("|3|  TERCA   |\n");
    printf("|3| DIA UTIL |\n");
    break;
case 4:
    printf("|4|  QUARTA   |\n");
    printf("|4| DIA  UTIL |\n");      
break;
case 5:
    printf("|5|   QUINTA   |\n");
    printf("|5| DIA  UTIL  |\n");
break; 
case 6:
    printf("|6|  SEXTA   |\n");
    printf("|6| DIA UTIL |\n");
    break;
case 7:
    printf("|7|      SABADO     |\n");
    printf("|7| FINAL DE SEMANA |");    
default:
    printf ("!|CODIGO INVALIDO|!");
    break;
}


    
    
    
    
    
    
    
    
    
    
    return 0;

}