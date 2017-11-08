#include<stdio.h>
#include<stdlib.h>

int somafracao (int num1, int den1, int num2, int den2, int * pnumR, int * pdenR)
{
    if (den1 ==0 || den2 ==0)
        return 0; // falso
    else
    {
        *pnumR = den2*num1 + den1*num2;
        *pdenR = den1*den2;
        return 1; // verdadeiro
    }
}

int main ()
{
    int num1, den1, num2, den2, numR, denR;
    printf("Entre com um numero racional na forma num/den: ");
    scanf("%d/%d", &num1, &den1);
    printf("Entre com outro numero racional na forma num/den: ");
    scanf("%d/%d", &num2, &den2);
    if (somafracao(num1, den1, num2, den2, &numR, &denR))
        printf("Resultado da soma = %d/%d\n", numR, denR);
    else
        printf("Erro!\n");
    return EXIT_SUCCESS;
}
