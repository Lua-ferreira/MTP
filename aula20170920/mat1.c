#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, d;
    printf("Sendo o Ponto 1 (x1, y1) e o Ponto 2 (x2, y2), dê: x1= ");
    scanf("%f",&x1);
    printf("\ny1= ");
    scanf("%f",&y1);
    printf("\nx2= ");
    scanf("%f",&x2);
    printf("\ny2= ");
    scanf("%f",&y2);
    d=sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    printf("\n%.4f", d);
}
