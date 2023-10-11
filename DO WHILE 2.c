#include <stdio.h>
#include <stdlib.h>

int main (){

int nota = -1;

do
{
    printf ("DIGITE NOTA DO ALUNO:");
    scanf ("%d",&nota);

if (nota < 0 || nota > 10)
{
    printf ("nota invalida... \n digite a nota novamente\n\n ");
}


} while (nota < 0 || nota > 10);

printf ("NOTA DO ALUNO: %d \n",nota);

return 0;
}
