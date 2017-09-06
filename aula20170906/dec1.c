#include <stdio.h>
int main()
{
    int n;
    printf("Insira um numerozito: ");
    scanf("%d", &n);
    if (n%2==0) //par
    {
        printf("\npar");
        if (n%3==0) //mult3
            printf(", multiplo de 3");
        if (n%7==0) //mult7
            printf(", multiplo de 7");
    }
    else //ímpar
    {
        printf("\nimpar");
        if (n%5==0) //mult5
            printf(" e multiplo de 5");
    }

    return 0;
}

