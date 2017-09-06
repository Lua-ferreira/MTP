#include <stdio.h>
int main()
{
    float btriangulo, htriangulo, areatriangulo;
    printf("Bota a base e a altura do triangulo ae: ");
    scanf("%f", &btriangulo);
    scanf("%f", &htriangulo);
    areatriangulo = (btriangulo*htriangulo)/2;
    printf("Area do triangulo: %.3f\n", areatriangulo);
    return 0;
}
