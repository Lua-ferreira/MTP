#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {0,1,2,4,8,16,1025}, nbytes = sizeof(vet), i=0, cont=0;
    unsigned char *p;
    p=(unsigned char *) vet;
    printf("Endereco inicial do vetor: %p\n", vet);
    for (i=0; i<nbytes; i++)
    {
        if(!p[i]) //outra maneira: if(*(ponteiro+i) == 0x00
            cont++;
        printf("Endereco: %p, dado: %d, %X\n", p+i, p[i], *(p+i));
    }
    printf("De %d bytes, %d estao com 0x00.\n", nbytes, cont);

    return EXIT_SUCCESS;
}
