#include <stdio.h>
#include <math.h>
int main()
{
    double n, b, l;
    printf("Dado logb(n) sendo b a base e n um número qualquer, dê: n= ");
    scanf("%lf",&n);
    printf("\nb= ");
    scanf("%lf",&b);
    l=log10(n)/log10(b);
    printf("\n%.4lf", l);
}
