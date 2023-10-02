#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

// DECLARANDO VARIAVEIS

char loginsalvo[500] = "felipe";
char senhasalvo [500] = "felipe2004";
char login [500];
char senha [500];

//PEDINDO O LOGIN E SENHA

printf ("digite seu login:\n");
gets(login);
printf ("\n");

printf ("digite sua senha:\n");
gets (senha);
printf ("\n");

// VERIFICANDO LOGIN E SENHA

if (strcmp (login, loginsalvo) == 0 && strcmp(senha, senhasalvo) == 0 ) {

    printf (" BEM VINDO \n");
    printf ("\n");
}
else {
    printf ("ACESSO NEGADO \n");
    printf ("\n");
}    

return 0;

}

