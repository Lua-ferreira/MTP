#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"
int main()
{
Matriz A,B,C;
int colunaA,linhaA, colunaB,linhaB, i, acumula;
printf("Insira as linhas e colunas da matriz A \n");
scanf("%d,%d", &linhaA, &colunaA);
printf("Insira as linhas e colunas da matriz B, (line,column) \n");
scanf("%d,%d", &linhaB, &colunaB);
if(colunaA==linhaB)
{
A=criarMatriz(linhaA,colunaA);
B=criarMatriz(linhaB,colunaB);
C=criarMatriz(colunaA,linhaB);
printf("Preencha a matriz A\n\n");
preencherMatriz(A);
printf("Preencha a matriz B\n\n");
preencherMatriz(B);
C= producted(A,B,C,linhaA,colunaA, linhaB,colunaB);
imprimirMatriz(C);
destruirMatriz(C);
destruirMatriz(A);
destruirMatriz(B);
}
else
printf("Não foi possivel multiplicar as matrizes \n\n");
return 0;
}

