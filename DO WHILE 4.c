#include <stdio.h>
#include <stdlib.h>

int main (){

int i;
float nota;
float soma;
float media;

for ( i = 1; i <= 2; i++){
do
{
   printf ("digie a nota do aluno\n",i);
   scanf ("%f",&nota);

} while (nota < 0 || nota > 10);

soma += nota;
media = soma / i;    
}

printf ("Media: %2.f \n",media);


    return 0;
}