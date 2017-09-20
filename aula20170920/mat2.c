#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, A;
    printf("Seja o triangulo ABC de lados abc, dê: b= ");
    scanf("%lf",&b);
    printf("\nc= ");
    scanf("%lf",&c);
    printf("\nAngulo entre b e c (radianos)= ");
    scanf("%lf",&A);
    a=sqrt(pow(b,2) + pow(c,2) - (2*b*c*cos(A)));
    printf("\n%.4lf", a);
}
