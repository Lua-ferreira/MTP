
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[4], j, numero;
    //long long int numero, num[N/sizeof(long long int)];
    char *p;
    printf("Insira 3 numeros e depois o codigo 0\n");
    p=(char*) num;
    j=0;
    do{
        scanf("%d",&numero);
        num[j]=numero;
        j++;
    }while (numero!=0 && j<4);
    p[sizeof(num)-1]=0x00;
    for(j=0;(j<sizeof(num)&&p[j]!=0);j++)
    {
        if(p[j]!=0)
            printf("%c",p[j]);
    }
    return EXIT_SUCCESS;
}
