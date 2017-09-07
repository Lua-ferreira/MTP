#include <stdio.h>
int main()
{
    int P=0, L, R, D, i;

    for (i=0; i<3; i++)
    {
        printf("Insira um limite: ");
        scanf("%d", &L);

        printf("Jogando dados...\n");
        int x = 1 + rand() %(6-1+1);
        printf("Dado 1: %d\n", x);
        int y = 1 + rand() %(6-1+1);
        printf("Dado 1: %d\n", y);
        int z = 1 + rand() %(6-1+1);
        printf("Dado 1: %d\n", z);
        R=x+y+z;
        printf("Soma dos dados: %d\n\n", R);

        if (L>11)
        {
            D=L-10;
            if (R>L)
                P=P-(D*(R-L));
            else
                P=P+((L-R)/D)+1;
        }
        else
            P=P+(11-R);

    }
    printf("\nPontos finais: %d\n", P);

    return 0;
}
