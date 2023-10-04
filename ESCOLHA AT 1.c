#include <stdio.h>
#include <stdlib.h>

int main()
{

    // DECLARANDO VARIAVEIS

    char operacao;
    float segundonumero;
    float primeironumero;
    float resultado;

    // PEDINDO PARA O USUARIO DIGITAR OS DADOS

    printf("digiteo o primerio numero:");
    scanf("%f", &primeironumero);
    printf("\n");

    printf("digite o segundo numero:");
    scanf ("%f",&segundonumero);
    printf ("\n");

    fflush (stdin); // LIMPAR CACHE

    printf ("digite + para somar \n" );
    printf ("digite - para subtrair \n" );
    printf ("digite * para multiplicar \n" );
    printf ("digite / para dividir \n" );
    printf ("\n");

    printf ("escolha operacao que desejar:");
    scanf ("%c",&operacao);


    // ESTRUTURA DE ESCOLHA "CASO"
    
    switch (operacao) 
    {
    case '+':
        resultado = primeironumero + segundonumero;
        break;
    case '-':
        resultado = primeironumero - segundonumero;
        break;   
    case '*':
        resultado = primeironumero * segundonumero;
        break;   
    case '/':
        resultado = primeironumero / segundonumero;       
        break;
   
    default:
        printf("opcao digitada invalida: \n");
        break;
    }
    

    system ("cls"); // LIMPA TELA

    // EXIBINDO AS INFORMÇÃOS

    printf ("primeiro numero: %.1f \n ",primeironumero);
    printf ("\n");
    printf ("segundo numero: %.1f \n",segundonumero);
    printf ("\n");
    printf ("operacao desejada foi: %c \n",operacao);
    printf ("\n");
    printf ("resultado: %.1f \n ", resultado);

    // FIM

    return 0;
}