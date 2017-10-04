#include <stdio.h>
#define N 16
int main()
{
    char str[N];
    int *varre, i;
    printf("Entre com o texto (max %d caracteres):\n", N-1);
    fgets(str,N,stdin);
    for(i=0; i<N/sizeof(int); i++)
        printf("Endereco '%c': %p, dado: %d (decimal), %X (hexadecimal)\n", str[i], varre+i, varre[i], varre[i]);
    printf("Codigo:\n");
    for (i=0; i<N/sizeof(int); i++)
    {
        printf("%d ", varre[i]);
        printf("\n");
    }
    return 0;
}
