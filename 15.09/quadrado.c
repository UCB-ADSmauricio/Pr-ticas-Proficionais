
#include <stdio.h>

int main() 
{
int base = 1;
int expoente = 2;
int resultado;

while (base <= 15)
{
resultado = base * base;
printf("Resultado %d: %d^%d = %d\n", base, base, expoente, resultado);
base++;
}
return 0;
}
