#include <stdio.h>
int main()
{
    int numero;
    int i, j, fatorial;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    getchar();
    fatorial = 1;
    for(i=0; i<numero; i++)
      fatorial = fatorial*(numero-i);
    printf("%d! = %d\n", numero, fatorial);
    return 0;
}
