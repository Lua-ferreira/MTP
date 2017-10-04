#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF}, nbytes = sizeof(vet), i=0, cont=0;
    unsigned char *p;
    p=(unsigned char *) vet;
    printf("Endereco inicial do vetor: %p\n", vet);
    for (i=0; i<nbytes; i++)
    {
        if(*(p+i) >= 0x01) // if(p[i])
            cont++;
        printf("Endereco: %p, dado: %d, %X\n", p+i, p[i], *(p+i));
    }
    printf("De %d bytes, %d estao com pelo menos um bit igual a 1.\n", nbytes, cont);

    return EXIT_SUCCESS;
}
