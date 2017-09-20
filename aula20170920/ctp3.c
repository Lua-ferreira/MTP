#include <stdio.h>

int main()
{
    int i, p=0;
    char tst[256];
    printf("Joga uma frase ae:\n");
    fgets(tst, 256, stdin);
    for (i=0; tst[i]!='\0'; i++)
    {
        if (tst[i]>64 && tst[i]<91 || tst[i]>96 && tst[i]<123)
            p++;
    }
    printf("\n%d\n", p);
    return 0;
}
