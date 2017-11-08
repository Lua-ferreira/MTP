#include<stdlib.h>
#include<stdio.h>
#include<math.h>
float media(float *numeros,int a)
{
    int i;
    float m=0.0f;
    for (i=0;i<a;i++)
        m+=numeros[i];
    m/=a;
    return m;
}
float desvio(float * numeros,int a)
{
    float m= media(numeros,a);
    float dp=0.0f;
    int i;
    for (i=0;i<a;i++)
            dp+=pow(numeros[i]-m,2);
    dp/=(a-1);
    return sqrt(dp);
}
int main()
{
    float * numer;
    int a, i=0;
    printf("Quantos numeros tu quer?: ");
    scanf("%d",&a);
    numer=(float*)malloc(a*sizeof(float));
    for (i=0;i<a;i++)
    {
        printf("Insira %do numero: ",i+1);
        scanf("%f",numer+i);
    }
    printf("\nMedia: %f",media(numer,a));
    printf("\nDesvio padrao:%f\n",desvio(numer,a));
    free(numer);
    return EXIT_SUCCESS;
}
