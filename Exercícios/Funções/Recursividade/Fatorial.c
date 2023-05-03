#include <stdio.h>

int fatorial(int numero)
{
    if (numero == 0 || numero == 1)
    {
        return 1;
    }
    else
    {
        return numero * fatorial(numero - 1);
    }
}

int main()
{
    int numero;
    printf("Digite um numero para calcular o seu faotrial: ");
    scanf("%i", &numero);
    printf("Resultado fatorial: %i", fatorial(numero));

    return 0;
}
