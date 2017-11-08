#include <stdio.h>
#include <stdlib.h>

int eprimo(unsigned int numero) {
	unsigned int i;
	int verifica = 1;
	for(i = 2; i <= numero/2; i++)
        if(numero%i == 0)
        {
			verifica = 0;
			break;
		}
	return verifica;
}

int mostra_soma_primos(unsigned int numero) {
	int i, possibilidades = 0;
	for(i = 1; i <= numero/2; i++)
		if(eprimo(i) && eprimo(numero-i)) { // entendeu pq?
			printf("%d + %d\n", i, numero-i);
			possibilidades++;
		}
	return possibilidades;
}

int main() {
    unsigned int numero, possibilidades;
    printf("Entre com um numero: ");
    scanf("%u", &numero);
    if(eprimo(numero))
		printf("Primo!\n");
	else {
		possibilidades = mostra_soma_primos(numero);
		if(possibilidades > 0)
			printf("Sao %d possbilidades.", possibilidades);
		else
			printf("N�o e primo nem expresso por soma de primos.\n");
	}
    return EXIT_SUCCESS;
}
