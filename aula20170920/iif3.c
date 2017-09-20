#include <stdio.h>
int main()
{
	float n, fat, i;
	printf ("Entre com um numero: ");
	scanf("%f", &n);
	getchar();
	fat = 1;
	for(i=1;i<=n;i++)
	{
		fat=fat*i;
	}
	printf("%.0f! = %.0f", n, fat);
	return 0;
}
