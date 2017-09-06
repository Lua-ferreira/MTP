#include <stdlib.h>
#include <time.h>
int main()
{
    int divisor, pontos=0, somarand, somaresu, multrand, multresu;
    printf("Informe um divisor de 8192: ");
    scanf("\n%d", &divisor);
    if (8192%divisor==0)
    {
        printf("Voce acertou!");
        pontos++;
    }

    srand(time(0)); //semente
    int x = 1328+ rand() %(1360-1328+1);
    printf("\nInforme a soma de %d com 101: ", x);
    scanf("%d", &somaresu);
    somarand=x+101;
    if (somaresu==somarand)
    {
        printf("Voce acertou!");
        pontos++;
    }

    int y = rand() %100;
    printf("\nInforme a multiplicaçao de %d com 3: ", y);
    scanf("%d", &multresu);
    multrand=y*3;
    if (multresu==multrand)
    {
        printf("Voce acertou!");
        pontos++;
    }

    printf("Pontos finais: %d\n", pontos);

    return 0;
}
