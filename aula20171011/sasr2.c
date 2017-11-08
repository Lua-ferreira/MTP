#include <stdio.h>

void PAR() {
    int i;
    for(i=1;i<=20;i++)
    if(i%2==0)
        printf("%d ",i);
}
void IMP() {
    int i;
    for(i=1;i<=20;i++)
    if(i%2!=0)
        printf("%d ",i);
}
int main() {
    int n;
    printf("Digite:\n1 - Para ver os ímpares de 1 a 20\n2 - Para ver os pares de 1 a 20\n");
    scanf("%d",&n);
    if (n==1)
        IMP();
    if (n==2)
        PAR();
    printf("\n");
    return 0;
}
