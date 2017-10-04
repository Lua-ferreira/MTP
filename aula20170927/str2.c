#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Textos cont�m vogais (V), consoantes (C), d�gitos (D) e/ou espa�os em branco (E). Fa�a um programa que pe�a ao usu�rio uma
//frase � use fgets() � e que conte cada tipo desses para mostrar o resultado para o usu�rio. Dica: voc� pode considerar
//caracteres como "n�meros"; por exemplo, para saber se � uma letra min�scula, pode comparar com if(s[i] >= 'a' && s[i] <= 'z').

int main()
{
    int l=0, v=0, c=0, d=0, e=0, i, j=0;
    char str[32768];
    printf("Insira qualquer texto: ");
    fgets(str, 32768, stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            l++;
            c++;
        }

        if (str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
            c--;
        v=l-c;

        if (str[i]>='0' && str[i]<='9')
            d++;

        if (str[i]==' ')
            e++;
    }

    printf("\nVogais: %d\nConsoantes: %d\nDigitos: %d\nEspacos em branco: %d\n", v, c, d, e);
    return 0;
}
