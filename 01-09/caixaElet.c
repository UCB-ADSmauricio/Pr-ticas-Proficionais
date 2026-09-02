int main()
{
    int saldo, opcao;
    
    saldo = 1000;
    printf(" O que deseja Fazer? \n 1-Saldo, 2-Saque, 3-Deposito, 4-Sair");
    scanf("%d", &opcao);
   if(opcao > 1 && opcao < 4)
   {
    if(opcao == 1)
    {
        printf("Seu saldo e: %d \n", &saldo);
        printf(" Deseja algo mais? \n 1-Saldo, 2-Saque, 3-Deposito, 4-Sair");
        scanf("%d", &opcao);
    }
    else if (opcao == 2)
    {
        printf("Quanto deseja sacar? \n");
        scanf("%d", &saldo);
        printf("Seu saldo e: %d \n", &saldo);
        printf(" Deseja algo mais? \n 1-Saldo, 2-Saque, 3-Deposito, 4-Sair");
        scanf("%d", &opcao);
    }
    else if (opcao == 3)
    {
        printf("Quanto deseja depositar? \n");
        scanf("%d", &saldo);
        printf("Seu saldo e: %d \n", &saldo);
        printf(" Deseja algo mais? \n 1-Saldo, 2-Saque, 3-Deposito, 4-Sair");
        scanf("%d", &opcao);
    }
    else if (opcao == 4)
    {
        printf("Ok, ate a proxima. \n");
    }
   }
   else
   {
         printf("Escolha uma opcao valida. \n 1-Saldo, 2-Saque, 3-Deposito, 4-Sair\n");
         scanf("%d", &opcao);
   }
    return 0;
}