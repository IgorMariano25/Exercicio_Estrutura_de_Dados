#include <stdio.h>

int main()
{
    int numero, soma = 0;

    printf("Digite um numero para saber os seus divisores: ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++)
    {
        soma = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                soma += j;
            }
        }
        if (soma == i)
        {
            printf("%i ", i);
        }
    }

    return 0;
}
