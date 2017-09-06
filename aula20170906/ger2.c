#include <stdio.h>
int main()
{
    int soma=0, divisor, numero;
    printf("Insira um numero: ");
    scanf("%d", &numero);
    for (divisor=1; divisor<numero; divisor++)
    {
        if (numero%divisor==0)
            soma+=divisor;
    }
        if (soma==numero)
            printf("O numero e perfeito\n");
        else
            printf("O numero nao e perfeito\n");
    return 0;
}
