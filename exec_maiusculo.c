#include <string.h>
#include <stdio.h>

int main()
{
    char frase[50], minusculo[50], maiusculo[50];
    int i, n;
    printf("Nome completo:");
    scanf("%[^\n]s",  &frase);
    n=strlen(frase);
    for(i=0; i<n; i++)
    {
        if ((frase[i]>='A')&&(frase[i]<='Z'))
        {
            maiusculo[i]=frase[i];
            minusculo[i]=frase[i]+32;
        }
        else if((frase[i]>'a')&&(frase[i]<'z'))
        {
            maiusculo[i]=frase[i]-32;
            minusculo[i]=frase[i];
        }
        else
        {
            maiusculo[i]=frase[i];
            minusculo[i]=frase[i];
        }
    }
    maiusculo[i]='\0';
    minusculo[i]='\0';
    printf("Maiusculas: %s\n", maiusculo);
    printf("Menusculas: %s\n", minusculo);
     return 0;
}