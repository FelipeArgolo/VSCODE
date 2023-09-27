#include <stdio.h>
#include <stdlib.h>


int main() {

// DECLARANDO AS VARIAVEIS

char nome[500];
int idade;
float primeiranota;
float segundanota;
float terceiranota;
float media;
int ano;
// PEDINDO OS DADOS DO USUARIO

printf ("DIGITE SEU NOME:\n");
gets (nome);
printf("\n");

printf ("DIGITE SEU ANO DE NASCIMENTO:");
scanf ("%d",&ano);
printf ("\n");

printf ("DIGITE SUA PRIMEIRA NOTA:\n");
scanf ("%f", &primeiranota);
printf ("\n");

printf ("DIGITE SUA SEGUNDA NOTA:\n");
scanf ("%f", &segundanota);
printf("\n");

printf ("DIGITE SUA TERCEIRA NOTA:\n");
scanf ("%f",&terceiranota);


// CALCULO

media = (primeiranota + segundanota + terceiranota) /3 ;
idade = (2023 - ano);

// EXIBINDO OS DADOS DO USÚARIO

system ("cls");

printf ("NOME: %s \n", nome );
printf ("\n");
printf ("IDADE DO ALUNO: %d \n", idade );
printf ("\n");
printf ("SUA MEDIA TOTAL E: %.2f\n", media  );
printf ("\n");

if (media >= 7)
{
    printf ("ALUNO ESTA APROVADO:");
}
else
{
    printf ("ALUNO ESTA REPROVADO");
}
    return 0;
    
}