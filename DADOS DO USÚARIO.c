#include <stdio.h>
#include <stdlib.h>


int main() {
//DECLARANDO AS VARIAVEIS

int   idade;
float peso;
char  sexo;
char  nome[250];
char  sobrenome [250];

//SOLICITANDO DADOS DO USUARIO

printf ("Digite sua idade: ");
scanf ("%d",&idade);

printf ("Digite seu peso: ");
scanf ("%f",&peso);

fflush(stdin); // LIMPAR CACHE

printf("Informe seu sexo:");
scanf ("%c",&sexo);

fflush(stdin); // LIMPAR CACHE

printf("Informe seu nome:");
gets (nome);

printf ("Informe seu sobrenome:");
gets (sobrenome);

//EXIBINDO DADOS PARA O ÚSUARIO


system ("cls"); // LIMPA TELA

printf("[///////////////////////]\n");
printf("Idade: %d   \n ", idade);
printf("[///////////////////////]\n");
printf("Peso: %.2f  \n",  peso);
printf("[///////////////////////]\n");
printf("Sexo:  %c   \n",  sexo);
printf("[///////////////////////]\n");
printf("Nome:  %s   \n",  nome);
printf("[///////////////////////]\n");
printf("Sobrenome:  %s   \n", sobrenome);
printf("[///////////////////////]\n");

return 0;

}