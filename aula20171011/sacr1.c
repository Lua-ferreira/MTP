#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	return rand()%6 + 1;
}

int main() {
    srand(time(0));
    char c;
    printf("Simulador de dado vs. 1.0 - Digite ENTER para rodar o dado "
		"ou 'Q' para sair\n");
    do {
	scanf("%c", &c);
	printf("... %d\n", dado());
    } while(c != 'q' && c != 'Q');
    printf("\nObrigado pela preferencia!\n");
    return EXIT_SUCCESS;
}
