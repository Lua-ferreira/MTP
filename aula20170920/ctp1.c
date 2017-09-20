#include <stdio.h>
int main()
{
    int i;
    char tst[256];
    printf("Joga uma frase ae:\n");
    fgets(tst, 256, stdin);
    for (i=0; tst[i]!='\0'; i++)
    {
        if (tst[i]>96 && tst[i]<123)
            tst[i]-=32;
    }
    printf("\n%s\n", tst);
    return 0;
}
