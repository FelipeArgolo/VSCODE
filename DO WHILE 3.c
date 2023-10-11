#include <stdio.h>
#include <stdlib.h>

int main (){

int numeroum;
int numerodois;


do
{
    printf ("digite sua primera nota:");
    scanf ("%d", &numeroum);
    

if (numeroum < 0 || numeroum > 10)
{
    printf ("DIGITE NOVAMENTE NUMERO INVALIDO \n\n");
}


} while (numeroum < 0 || numeroum > 10 );


  

 do
{
    printf ("digite sua primera nota:");
    scanf ("%d", &numerodois);
    

if (numeroum < 0 || numerodois > 10)
{
    printf ("DIGITE NOVAMENTE NUMERO INVALIDO \n\n");
}

} while (numeroum < 0 || numeroum > 10 ); 
  
  printf("valor total: %d \n", numeroum + numerodois);

    return 0;
}