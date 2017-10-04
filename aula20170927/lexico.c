#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0, j=i+1, x=0, cont=0, ord=0;
    char str[5][256], aux[5][256];
    for(i=0;i<5;i++)
    {
       printf("Insira a %da palavra: ", i+1);
       fgets(str[i], 256, stdin);
    }

    /* Ordenação do Vetor */
    ord=5;
    while (ord>1)
    {
        for (cont=0;cont<5; cont++)
        {
            if (str[cont][1]>str[cont+1][1])
            {
                aux[cont][256]=str[cont][256];
                str[cont][256]=str[cont+1][256];
                str[cont+1][256]=aux[cont][256];
            }
        }
        ord=ord-1;
    }
    /* Impressão do Vetor Ordenado */

    for (j=0; j<5; j++)
    {
        printf(" %s,",aux[j][256]);
    }


    /*for(i=1;i<=5;i++)
    {
        if (str[i][1]<str[j][1])
        {
            if (str[i][1]<str[j][1])

        }

    }


    for(j = 0; j < i; j++)
    {
           if((strcmp(str[j],str[j+1]>0)))
            {
              strcpy(str[j+1],temp);
              strcpy(str[j],str[j+1]);
              strcpy(temp, str[j]);
           }
    }


    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
           printf("%s",str[i][j]);
        }
    }
getchar();*/


    return 0;
}
