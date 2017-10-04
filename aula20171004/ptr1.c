#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    unsigned int dado=0xFACA8421;
    unsigned char *p;
    printf("Variavel: %X\n",dado);
    printf("Endereco: %p\nBase decimal: %d\nBase decimal unsigned: %u\n\n",&dado,dado,dado);
    p=(unsigned char*)&dado;
    for(i=0;i<sizeof(dado);i++)
        printf("Endereco: %p | Contem %u (decimal) ou %X (hexadecimal)\n",p+i,*(p+i),p[i]);
    return EXIT_SUCCESS;
}
