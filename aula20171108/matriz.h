#ifndef MATRIZ_H
#define MATRIZ_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef
	struct aMatriz {
		double ** m;
		int lin, col;
	}
Matriz;

Matriz criarMatriz(int M, int N) {
	Matriz A;
	int i;
	A.m = calloc(M, sizeof(double *));
	for(i = 0; i < M; i++)
		A.m[i] = calloc(N, sizeof(double));
	A.lin = M;
	A.col = N;
	return A;
}

void destruirMatriz(Matriz A) {
	int i;
	for(i = 0; i < A.lin; i++)
		free(A.m[i]);
	free(A.m);
}

void preencherMatriz(Matriz A) {
	int i, j;
	for(i = 0; i < A.lin; i++)
		for(j = 0; j < A.col; j++) {
			printf("Entre com o elemento [%d][%d]: ", i, j);
			scanf("%lf", A.m[i]+j);
		}
}

void imprimirMatriz(Matriz A) {
	int i, j;
	for(i = 0; i < A.lin; i++) {
		for(j = 0; j < A.col; j++)
			printf("%lg\t", A.m[i][j]);
		printf("\n");
	}
	printf("> %dx%d\n\n", A.lin, A.col);
}

Matriz transposta(Matriz A) {
	Matriz At = criarMatriz(A.col, A.lin); // ordem transposta
	int i, j;
	for(i = 0; i < A.col; i++)
		for(j = 0; j < A.lin; j++)
			At.m[i][j] = A.m[j][i];
	return At;
}

double determinante(Matriz A);

double menor(Matriz A, int l, int c) {
	Matriz M = criarMatriz(A.lin-1,A.col-1);
	double menorA;
	int i, j, p, q;
	p = 0;
	for(i = 0; i < A.lin; i++) {
		if(i != l) {
			q = 0;
			for(j = 0; j < A.col; j++)
				if(j != c) {
					M.m[p][q] = A.m[i][j];
					q++;
				}
			p++;
		}
	}
	menorA = determinante(M);
	destruirMatriz(M);
	return menorA;
}

double cofator(Matriz A, int i, int j) {
	return ((i+j)%2) ? -1*menor(A,i,j) : menor(A,i,j);
}

double determinante(Matriz A) {
	double det = NAN;
	int i;
	if(A.lin != A.col)
		fprintf(stderr,"Matriz retangular, sem determinante!\n");
	if(A.lin == 1) det = A.m[0][0];
	if(A.lin == 2) det = A.m[0][0]*A.m[1][1]-A.m[0][1]*A.m[1][0];
	if(A.lin == 3) det = (A.m[0][0]*A.m[1][1]*A.m[2][2]+
		A.m[0][1]*A.m[1][2]*A.m[2][0]+A.m[0][2]*A.m[1][0]*A.m[2][1])-
		(A.m[0][0]*A.m[1][2]*A.m[2][1]+A.m[0][1]*A.m[1][0]*A.m[2][2]+
		A.m[0][2]*A.m[1][1]*A.m[2][0]);
	if(A.lin > 3) {
		det = 0;
		for(i = 0; i < A.col; i++)
			det += A.m[0][i]*cofator(A,0,i);
	}
	return det;
}
Matriz comatriz(Matriz A){
Matriz C=criarMatriz(A.lin,A.col);
int i,j;
for(i=0; i<A.lin; i++)
    for(j=0; j<A.col; j++)
    C.m[i][j]=cofator(A,i,j);
return C;
}

Matriz producted (Matriz A, Matriz B, Matriz C, int linhaA,int colunaA, int linhaB,int colunaB)
{
int i,j,k;
double acumula;
for(k=0; k<linhaA; k++){
    for(j=0; j<colunaB; j++){
        acumula=0;
    for(i=0; i<colunaA; i++){
    acumula= acumula+A.m[k][i]*B.m[i][j];
    }
    C.m[k][j]= acumula;
    }
}
return C;
}

Matriz adjunta(Matriz A){
Matriz C=comatriz(A);
Matriz Ct=transposta(C);
destruirMatriz(C);
return Ct;
}

Matriz Inversa(Matriz A, Matriz Ct, double det){
Matriz I=criarMatriz(A.lin, A.col);
int i,j;
for(i=0; i<A.lin;i++){
for(j=0; j<A.col; j++){
I.m[i][j]=(1/det)*(Ct.m[i][j]);
}
}
return I;
}

#endif
