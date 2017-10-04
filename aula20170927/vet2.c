#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[10], aux=0, i=0;
    for (i=0; i<10; i++)
    {
        printf("\nInsira o %do numero ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\nInvertido:\n\n");
    for(i=9; i>-1; i--)
        printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
