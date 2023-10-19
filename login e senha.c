#include <stdio.h>
#include <stdlib.h>



int main(){

char loginsalva [500] = "felipe";
char senhasalva [500] = "senai123";
char login [500];
char senha [500]; 


do
{
    printf ("Insira seu nome de usuario:");
    gets(login);
    
    printf("\n");
    
    printf("insira sua senha:");
    gets(senha);

if (strcmp(login, loginsalva) == 0 && strcmp (senha, senhasalva) == 0){

    printf("BEM VINDO AO SISTEMA\n");
}
else 
{   
    printf("LOGIN OU SENHA INVALIDOS");
}


} while (strcmp(login, loginsalva) != 0 || strcmp(senha, senhasalva) != 0);




    return 0;
}