#include <stdio.h>
#include <stdlib.h>
#define N 256
int main()
{
    int opc,i,j;
    long long int *p, numero, num[N/sizeof(long long int)];
    int indexmax = N/sizeof(long long int);
    char frase[N],*pc;
    printf("Escolha uma acao:\n1-Criptografar\n2-Descriptografar\n");
    scanf("%d",&opc);
    getchar();
    if(opc==1)
    {
        for(i=0;i<N;i++) frase[i]='\0';
        printf("Digite uma frase: \n");
        fgets(frase,N,stdin);
        p=(long long int*)frase;
        for(i=0;i<(sizeof(frase)/sizeof(long long int));i++)
        {
            if(p[i]!=0)
                printf("%lld ",p[i]);
        }
        return EXIT_SUCCESS;
    }
    if(opc==2)
    {
        printf("Insira o codigo 0 para encerrar\n");
        pc=(char*) num;
        j=0;
        do{
            scanf("%lld",&numero);
            num[j]=numero;
            j++;
        }while (numero!=0 && j < indexmax);
        pc[sizeof(num)-1]=0x00;
        for(j=0;(j<sizeof(num)&&pc[j]!=0);j++)
        {
            if(pc[j]!=0)
                printf("%c",pc[j]);
        }
        return EXIT_SUCCESS;
    }
    else
    {
        printf("Opcao nao reconhecida\n");
    return EXIT_FAILURE;
    }
}
