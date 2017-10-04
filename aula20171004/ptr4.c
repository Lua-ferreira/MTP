#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, s, p1, p2, ps;
    unsigned char *p;
    p1=(unsigned char *) &n1;
    p2=(unsigned char *) &n2;
    ps=(unsigned char *) &s;

    printf("Insira dois numeros: ");
    scanf("%d%d", &n1, &n2);
    s=n1+n2;
    printf("Endereco do primeiro numero: 0x%p1 | %d\nEndereco do segundo numero: 0x%p2 | %d\nEndereco da soma dos dois: 0x%ps | %d\n", n1, n1, n2, n2, s, s);

    return EXIT_SUCCESS;
}
