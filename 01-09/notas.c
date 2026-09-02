int main()
{
    float nota;
    
    printf("Digite sua nota \n");
    scanf("%f", &nota);
   
    if(nota > 10 || nota < 0)
    {
        printf("Escolha um numero de 1 a 10 \n");
        scanf("%f", &nota);
    }
    else
    {
        if(nota > 9.0)
        {
         printf("Excelente");
        }
        else if(nota > 7.5 && nota < 9.0)
        {
             printf("Muito Bom");
        }
        else if(nota > 6.0 && nota < 7.5)
        {
             printf(" Bom");
        }
        else if(nota > 4.0 && nota < 6.0)
        {
             printf("Insuficiente");
        }
        else if(nota < 4.0)
        {
             printf("Reprovado");
        }

    }
    return 0;
}