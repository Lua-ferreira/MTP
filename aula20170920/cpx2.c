#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
double complex fazcomplexo(double a, double b, char c)
{
	if (c == 'r' || c == 'R')
		return a + I*b;
	else
		return a*cos(b) + I*a*sin(b);
}
void mostracomplexo (double complex z, char c)
{
	if(c == 'r'||c=='R')
	printf("%lf + I*%lf\n", creal(z), cimag(z));
	else
	printf("%lf / %lf\n", cabs(z), carg(z));
}
int main()
{
	double complex z, y;
	double a, b;
	printf("Entre com um numero complexo z (real, imaginario) : ");
	scanf("%lf, %lf", &a, &b);
	z= fazcomplexo(a,b,'r');
	printf("A multiplicacao pelo conjugado:\n");
	printf("Forma retangular:\n");
	mostracomplexo(z*conj(z),'r');
	printf("Forma polar:\n");
	mostracomplexo(z*conj(z),'p');
	return EXIT_SUCCESS;
}

