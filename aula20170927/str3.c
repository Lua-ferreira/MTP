#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <stdlib.h>

int main(){
    int i;
    char frase[256],cifra[256];
    printf("Digite uma frase: ");
    fgets(frase, 256, stdin);
    frase[strlen(frase)-1]='\0';
     for(i=0; i<256; i++){
        if(isalpha(frase[i])){
            if ((frase[i]>= 65&& frase[i] <78)||(frase[i]>=97&& frase[i]<110))
                cifra[i]= frase[i]+13;
            else
                cifra[i]= frase[i]-13;

            }
            else
                cifra[i] = frase [i];
        }
        printf("\nA frase em ROT13 e: %s\n",cifra);
        return 0;
}
