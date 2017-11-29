#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    char * rec;
    int i=0;
    rec=(char*)malloc(1*sizeof(char));
    printf("Escreva alguma coisa:\n");
    while(1)
        {
            scanf("%c", rec+i);
            rec= (char *)realloc(rec, sizeof(char)*1);
            if(*(rec+i)==' ')
                break;
            i++;
        }
        *(rec+i)='\0';
            while(i>=0)
    {
        *(rec+i)= toupper(*(rec+i));
        i--;
    }
        printf("***%s",rec);
        free(rec);
    return EXIT_SUCCESS;
}
