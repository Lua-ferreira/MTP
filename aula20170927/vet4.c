#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>
#define N 1000

int main()
{
    srand(time(0));
    int vet[N];
    int n1, i;
    int menor=1 << 31-1, maior=0;

    printf("Insira um numero entre 1 e 1000: ");
    scanf("%d", &n1);

    for(i=0; i!=n1; i++)
        vet[i] = (rand()%10);

    for(i=0; i!=n1; i++)
    {
        if(vet[i] < menor)
            menor=vet[i];
        if(vet[i] > maior)
            maior=vet[i];
    }
    printf("%d, %d", menor, maior);
    return 0;
}
