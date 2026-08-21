#include <stdio.h>

int main()
{
    float n1, n2, n3, total; 
    
    printf("Digite a sua primeira nota.\n");
    scanf("%f", &n1);
    
    printf("Digite a sua segunda nota.\n");
    scanf("%f", &n2);
    
    total = n1 + n2;

    if(total >7)
    {
         printf("Sua nota eh: %.2f", total );
		 printf("Você está Aprovado\n");
    }
    else(total <7);
    {
        printf("Sua nota eh: %.2f", total );
		printf(". Você está Reprovado\n");
		
        printf("Digite sua nota na prova de recuperação.\n");
        scanf("%f", n3);
        
        if(n1 > n2)
        {
            total = n1 + n3;
            
        }
        else(n1 < n2);
        {
           total = n2 + n3;
        }
        if(total <7)
    {
        printf("Sua nota eh: %.2f", &total );
		printf(". Você está Aprovado\n");
    }
    else(total <7);
    {
        printf("Sua nota é: %.2f", &total );
		printf(". Você está Reprovado\n");
    }
    }
    return 0;
}
