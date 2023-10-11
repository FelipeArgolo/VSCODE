#include <stdio.h>
#include <stdlib.h>

int main () {



    int nota = -1;


    while (nota < 0 || nota > 10)
    {
        printf ("Digite a nota do aluno:");
        scanf("%d",&nota);

        if (nota < 0 || nota > 10)
        {
            printf ("Nota invalida. \n Digite a nota novamente...\n\n");
        }
        
    }
    
printf("nota: %d \n",nota);
    
    
    
    
    
    
    return 0;
}