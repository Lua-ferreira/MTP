#include <stdio.h>
int main()
{
    float ladoquadrado, areaquadrado;
    printf("Bota o lado do quadrado ae: ");
    scanf("%f", &ladoquadrado);
    areaquadrado = ladoquadrado*ladoquadrado;
    printf("Area do quadrado: %.3f\n", areaquadrado);
    return 0;
}
