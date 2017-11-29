#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
	Matriz A, adjA;
	int ordem;
	printf("Insira a ordem da matriz: ");
	scanf("%d", &ordem);
	A = criarMatriz(ordem, ordem);
	preencherMatriz(A);
	imprimirMatriz(A);
	adjA = adjunta(A);
	printf("Adjunct:\n");
	imprimirMatriz(adjA);
	destruirMatriz(A);
	destruirMatriz(adjA);
	return EXIT_SUCCESS;
}
