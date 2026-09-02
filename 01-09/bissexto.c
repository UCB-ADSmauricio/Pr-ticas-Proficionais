#include <stdio.h>

int main()
{
    int ano;
    
    printf("Escolha o ano \n");
    scanf("%d", &ano);
   
    if(ano%4 == 0 && (ano%100 != 0 || ano%400 == 0  ))
    {
        printf("O ano e Bissexto");
    }
    else
    {
         printf("O ano nao e Bissexto");
    }
    return 0;
}