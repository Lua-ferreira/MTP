#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <complex.h>
#include <time.h>

double randd(double nmin, double nmax) {
    return nmin + (nmax-nmin) * (double)rand()/RAND_MAX;
}
int main()
{
    double o, i, pi, er;
    er=0;
    pi=M_PI;
    o=randd(0,2*pi);
    for (i=0; i<100; i++){
        er+=cexp(I*o)-(ccos(o)+I*csin(o));
        printf("Rodada %.0lf -> Erro = %le\n", i+1, er);
    }

    printf("\nErro = %le", er);
}
