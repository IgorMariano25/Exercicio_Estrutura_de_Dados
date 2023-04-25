#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero para saber os seus divisores: ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            printf("%i ", i);
        }
    }

    return 0;
}
