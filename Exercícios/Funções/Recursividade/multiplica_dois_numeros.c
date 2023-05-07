#include <stdio.h>

int multiflica_dois_numeros(int x, int y)
{
    if (x * y <= 0)
    {
        return 0;
    }
    else
    {
        x *y;
        multiflica_dois_numeros(x - 1, y - 1);
    }
    return x * y;
}

int main()
{
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);

    printf("Resultado da multiplicacao: %i", multiflica_dois_numeros(valor1, valor2));
    return 0;
}
