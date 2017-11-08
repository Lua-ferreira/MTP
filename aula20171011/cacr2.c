#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double delta(double a, double b, double c)
{
	double u;
	u=(pow(b,2)-(4*a*c));

	return u;
}
double raizes(double u, double a, double b, double j)
{
	double r1, p, o, i, y;
	p=b*(-1);
	o=sqrt(u);
	y=p+j*o;
	i=2*a;
	r1=(y/i);
	return r1;
}
int main()
{
    double a, b, c, d, r,ra,j;
    printf("Entre com 'a':");
    scanf("%lf",&a);
    printf("\nEntre com 'b':");
    scanf("%lf",&b);
    printf("\nEntre com 'c':");
    scanf("%lf",&c);
    d=delta(a,b,c);
    if(d>=0)
    {
        j=1;
        r=raizes(d,a,b,j);
        j=0;
        j=-1;
        ra=raizes(d,a,b,j);
        if (ra==r)
            printf("raiz=raiz'=>%.0lf",r);
        else
            printf("\nraiz=>%.0lf \nraiz'=>%.0lf",r, ra);
    }
    else
        printf("NAO HA RAIZES REAIS!!");
    return EXIT_SUCCESS;
}

