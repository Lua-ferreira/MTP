#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    float n, r;
    double N, R;

    printf("Entre com um numero inteiro: ");
    scanf("%f", &n);
    N=n;
    for (i=0; i<729; i++)
        r+=(1/n);
    for (i=0; i<729; i++)
        R+=(1/N);
    printf("%.15f, %.15lf", r, R);
    return 0;
}
