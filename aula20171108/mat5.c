#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"
int main()
{
Matriz A,I,adjA,b,c;
double a;
int ordem,colunabi;
colunabi=1;
printf("Escreva a ordem:");
scanf("%d", &ordem);
A=criarMatriz(ordem,ordem);
b=criarMatriz(ordem,colunabi);
c=criarMatriz(ordem,colunabi);
printf("Escreva os coeficientes: \n\n");
preencherMatriz(A);
printf("Escreva os elementos: \n\n");
preencherMatriz(b);
printf("Original: \n");
imprimirMatriz(A);
a= determinante(A);
adjA=adjunta(A);
if(a!=0)
    {
    I=Inversa(A,adjA,a);
    c=producted(I,b,c,ordem,ordem,ordem,colunabi);
    imprimirMatriz(c);
    destruirMatriz(A);
    destruirMatriz(adjA);
    destruirMatriz(I);
    destruirMatriz(c);
    destruirMatriz(b);
    }
if(a==0)
printf("Impossivel \n\n");
return EXIT_SUCCESS;
}



