#include <stdio.h>

int fibonacci(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    else if (numero == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(numero - 1) + fibonacci(numero - 2);
    }
}

int printa_fibonacci(tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%i ", fibonacci(i));
    }
    printf("\nFIM !");
}

int main()
{
    int numero;
    printf("Digite o tamanho da sequência de Fibonacci");
    scanf("%i", &numero);
    printf("FIBONACCI DO TAMANHO %i\n", numero);
    printa_fibonacci(numero);
    return 0;
}
