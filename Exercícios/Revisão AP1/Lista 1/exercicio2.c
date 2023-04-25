#include <stdio.h>

int main()
{
    int a, b, c, soma = 0, diferenca = 0;

    printf("Digite o priemiro valor: ");
    scanf("%i", &a);
    printf("Digite o segundo valor: ");
    scanf("%i", &b);
    printf("Digite o terceiro valor: ");
    scanf("%i", &c);

    if ((a >= b) && (b >= c))
    {
        soma = a + b;
    }
    else if ((b >= a) && (a >= c))
    {
        soma = a + b;
    }
    else if ((c >= b) && (b >= a))
    {
        soma = c + b;
    }
    else
    {
        soma = a + c;
    }

    if ((a <= b) && (b <= c))
    {
        diferenca = a - b;
    }
    else if ((b <= a) && (a <= c))
    {
        diferenca = a - b;
    }
    else if ((c <= b) && (b <= a))
    {
        diferenca = c - b;
    }
    else
    {
        diferenca = a - c;
    }

    printf("Soma: %i\n", soma);
    printf("Diferenca: %i\n", diferenca);
    return 0;
}
