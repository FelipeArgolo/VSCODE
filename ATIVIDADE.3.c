#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

setlocale(LC_ALL,"portuguese");

// DECLARANDO VARIAVEIS

int numero;


// PEDINDO OS DADOS PARA O USUARIO

printf ("DIGITE O NUMERO:\n");
scanf ("%d",&numero);
printf ("\n");

// EXIBINDO OS DADOS

printf ("NUMERO: %d \n", numero);
printf ("\n");

if (numero % 2 == 0) {
    printf ("O NUMERO DIGITADO É PAR:");
}
else {
    ("NUMERO DIGITADO É IMPAR:");
}
    return 0;
}

