#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	return rand()%6 + 1;
}

int main() {
    srand(time(0));
    int jogada[5], soma=0, i, fmenor, fmaior;
    char c;
    printf("Mini jogo de dados vs. 1.0 - Objetivo: tentar obter, na soma dos resultados, um valor entre 18 e 23\n");
    for (i=0; i<5; i++)
    {
        printf("\nDigite ENTER para rodar o %do dado.",i+1);
        scanf("%c", &c);
        jogada[i] = dado();
        soma+=jogada[i];
        printf("...%d\nPontuacao = %d.\n",jogada[i] ,soma);
    }
    fmenor=18-soma;
    fmaior=soma-23;
    if (soma>=18 && soma<=23)
        printf("\nParabens! Voce venceu o jogo com %d pontos!\n", soma);
    if (soma<18)
        printf("\nQue pena... Voce perdeu por %d pontos.\n", fmenor);
    if (soma>23)
        printf("\nQue pena... Voce perdeu por %d pontos.\n", fmaior);
    return EXIT_SUCCESS;
}
