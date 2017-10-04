#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vet[10], soma=0, produto=1;
    printf("Digite dez numeros reais:\n");
    for(i=0; i!=10; i++)
    {
        scanf("%d", &vet[i]);
        soma = soma + vet[i];
        produto = produto * vet[i];
    }
    printf("A soma e: %d\nO produto e: %d", soma, produto);
    return 0;
}
