#include<stdio.h>
#include<stdlib.h>
int soma(int num, int den, int nume, int deno, int * pnum, int *pden)
{
    if(den==0 || deno==0)
        return 0;
    else
    {
        *pnum=deno*num+den*nume;
        *pden=den*deno;
        return 1;
    }
}
int mdc (int u,int v)
{
    if (u==v || v==0)
        return u;
    if (u==0)
        return v;
    if (u%2==0 && v%2!=0)
        return mdc(u/2,v);
    if(u%2!=0 && v%2==0)
       return mdc(u,v/2);
    if (u%2==0 && v%2==0)
        return 2*mdc(u/2,v/2);
    if(u>v)
        return mdc((u-v)/2,v);
    else
        return mdc((v-u)/2,u);

}
int main()
{
    int num, nume, den, deno, rep, pden, pnum, until, pry;
    printf("Digite um numero racional da forma numerador/denominador:\n");
    scanf("%d/%d", &num, &den);
    printf("Digite outro numero racional da forma numerador/denominador:\n");
    scanf("%d/%d", &nume, &deno);
    if(soma(num,den, nume, deno, &pnum, &pden))
        printf("\nResposta: ",pnum,pden);
    else
        printf("___ERRO___");
    until=pnum/mdc(pnum,pden);
    pry=pden/mdc(pnum,pden);
    printf("%i/%i", until,pry);
    return EXIT_SUCCESS;
}
