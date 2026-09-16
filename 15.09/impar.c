#include <stdio.h>
int main()
{   
    int numero = 0;

    while (numero < 50)
    {
        numero++;
        if( numero % 2 == 0)
        {
            continue;
        }
        printf("%d\n", numero);
        
    }
    
    return 0;
}
