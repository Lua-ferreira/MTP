#include <stdio.h>
int main()
{
    int b, p, i, r=1;
    printf("Insira a base e a potencia: ");
    scanf("%d", &b);
    scanf("%d", &p);
    for(i=0; i<p; i++)
        r=r*b;
    printf("\nResultado: %d", r);

    return 0;
}
