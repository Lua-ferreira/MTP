#include<stdio.h>
#include<stdlib.h>

int somatoria (int * pvetor, int * ptamanho)
{
    if(*ptamanho)
    {
        (*ptamanho)--;
        return *pvetor + somatoria(pvetor+1, ptamanho);
    }
}

int main ()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int N = sizeof(A)/sizeof(int);
    printf("Somatoria = %d\n", somatoria(A, &N));
    return EXIT_SUCCESS;
}

