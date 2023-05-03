#include <stdio.h>

int produto_intervalo(int m, int n)
{
    m *n;
    if (n == m)
    {
        return n;
    }
    else
    {
        return m * produto_intervalo(m + 1, n);
    }
}

int main()
{
    int valor1, valor2;
    printf("Digite o primeiro valor do intervalo: ");
    scanf("%i", &valor1);

    printf("Digite o segundo valor do intervalo: ");
    scanf("%i", &valor2);

    printf("O produto do intervalo de %i e %i e igual a: %i", valor1, valor2, produto_intervalo(valor1, valor2));
    return 0;
}
