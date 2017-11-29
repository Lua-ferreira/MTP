#include<stdio.h>
#include<stdlib.h>
#define n 64
int menu()
{
    int opc;
    do
    {
        printf("1-Inform \n");
        printf("2-Resgatar \n");
        printf("3-get out \n");
        scanf("%d",&opc);
    }
    while(opc!=1&&opc!=2&&opc!=3);
    return opc;
}
void informa()
{
    FILE * arquivo;
    char nome[n];
    int idade;
    float altura;
    printf("\nwrite the first name:\t");
    scanf("%s",&nome);
    printf("\nwrite the old:\t");
    scanf("%d",&idade);
    printf("\nwrite the size/height:\t");
    scanf("%f",&altura);
    arquivo=fopen("info.txt", "w");
    fprintf(arquivo,"%s\n%d\t%f",nome,idade,altura);
    fclose(arquivo);
}
void resgatar()
{
    FILE * arquivo;
    char nome[n];
    int idade;
    float altura;
    arquivo=fopen("info.txt", "r");
    fscanf(arquivo,"%s\n%d\t%f",&nome,&idade,&altura);
    fclose(arquivo);
    fprintf(stdout,"%s\n%d anos\n%g metros\n",nome,idade,altura);
}
int main()
{
    int opc;
    do
    {
    opc=menu();
    if (opc==1)
        informa();
    if (opc==2)
        resgatar();
    }
    while(opc!=3);
    return EXIT_SUCCESS;
}
