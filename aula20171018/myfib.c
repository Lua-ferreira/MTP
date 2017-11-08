#include<stdio.h>
#include<stdlib.h>

int soma(int *pot, int *pp)
{
    if(*pp)
        {
        (*pp)--;
        return *pot + soma(pot+1, pp);
        }
        else
            return 0.0;
}
int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int N = sizeof(A)/sizeof(int);
    printf("Somatoria: %i\n",soma(A,&N));
    return EXIT_SUCCESS;
}
