#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void printar(int l, int c)
{
    char cripto[] = { ": $ # $ : 4 b . ' :. : $ # $: 4b. ':."};
    int i=0, j=0, n=0;
    for(;i<l;i++)
    {
        printf("\n");
        for(;j<c;j++)
        {
            n=rand()%38;
            printf("%s", cripto[n]);
        }
    }
    printf("\n");
}

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Portuguese");
    int c=0, l=0;
    printf("Entre com o numero de linhas: ");
    scanf("%d", &l);
    printf("Entre com o numero de colunas: ");
    scanf("%d", &c);
    getchar();
    printar(l,c);
    return EXIT_SUCCESS;
}
